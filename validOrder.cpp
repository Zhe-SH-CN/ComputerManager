#include"teacher.h"
#include"orderFile.h"
void Teacher::validOrder(){
	//审核预约
	OrderFile orderFile;
	if (orderFile.m_size == 0) {
		cout << "无预约记录" << endl;
		return;
	}

	cout << endl << "审核中的预约记录可以通过或者未通过！请输入审核的记录" << endl;
	vector<int> v;
	int cnt = 1;//记录预约条数

	//分隔符
	cout << orderFile.showMyOrderSep << endl;


	//筛选可取消预约
	for (int i = 0; i < orderFile.m_size; i++) {
		map<string, string> m_data = orderFile.m_orderData[i];
		
		//状态是审核中
		if (m_data["status"] == "1") {
			v.push_back(i);
			cout << "第" << cnt++ << "条预约\t";//cnt先输出再加
			//打印预约 1表示打印学号和姓名
			orderFile.printOrder(m_data, 1);
		}
		
	}

	cout << "请输入审核的预约，0表示退出：" << endl;
	int select = 0;
	while (true) {
		select = getSelect();//获取选择

		//退出
		if (select == 0) {
			cout << "退出成功" << endl;
			break;
		}
		//注意，后面select-1所以这里是<=v.size()
		else if (select > 0 && select <= v.size()) {
			//cout << "记录所在位置：" << v[select - 1] << endl;

			


			cout << " -------------------------------" << endl
				<< "请输入是否通过预约：" << endl
				<< " -------------------------------" << endl
				<< "|                               |" << endl
				<< "|          1.通    过           |" << endl
				<< "|          2.未 通 过           |" << endl
				<< "|          0.退    出           |" << endl
				<< "|                               |" << endl
				<< " -------------------------------" << endl;

			cout << "请输入你的选择：" << endl;
			int choice=-1;
			while (true) {
				choice = getSelect();
				//取出map容器 注意只有比较的时候可以用m_data，如果要更改，就要写 orderFile.m_orderData[v[select - 1]]
				map<string, string> m_data = orderFile.m_orderData[v[select - 1]];
				
				//预约的机房 注意只有比较的时候可以用cr，如果要更改，就要写 vCom[stringToInt(m_data["roomId"]) - 1]
				ComputerRoom cr = vCom[stringToInt(m_data["roomId"]) - 1];

				if (choice == 0) {
					cout << "退出成功" << endl;
					break;
				}
				else if (choice == 1) {
					this->initCom();
					//判断预约数量是不是在最大人数里
					if (cr.m_orderNum >= cr.m_maxNum) {
						cout << "目前预约人数已满！无法通过" << endl;
						break;
					}


					//更新预约信息
					orderFile.m_orderData[v[select - 1]]["status"] = "2";
					orderFile.updateOrder();
					
					//更新机房信息 注意这里要-1
					
					vCom[stringToInt(m_data["roomId"])-1].m_orderNum++;
					this->updateComRoom();

					cout << "审核已通过" << endl;

					break;
				}
				else if (choice == 2) {
					orderFile.m_orderData[v[select - 1]]["status"] = "3";
					orderFile.updateOrder();
					cout << "审核未通过" << endl;
					break;
				}
				else {
					cout << "输入有误！请重新输入" << endl;
				}
			}

			//从里面的循环出来了，说明就是结束了，直接break;
			break;
			
			
			
		}
		else {
			cout << "输入有误，请重新输入！" << endl;
		}
		
	}

}