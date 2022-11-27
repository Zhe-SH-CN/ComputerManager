#include"student.h"
void Student::cancelOrder(){
	//取消预约
	OrderFile orderFile;
	if (orderFile.m_size == 0) {
		cout << "无预约记录" << endl;
		return;
	}

	cout <<endl<< "审核中的或者预约成功的预约记录可以取消！请输入取消的预约记录" << endl;
	vector<int> v;
	int cnt = 1;//记录预约条数

	//分隔符
	cout << orderFile.showMyOrderSep << endl;


	//筛选可取消预约
	for (int i = 0; i < orderFile.m_size; i++) {
		map<string, string> m_data = orderFile.m_orderData[i];
		//判断学号和姓名是不是自己
		if (stringToInt(m_data["stuId"]) == this->m_id&&m_data["stuName"]==this->m_name) {
			//并且是审核中或者预约成功
			if (m_data["status"] == "1" || m_data["status"] == "2") {
				v.push_back(i);
				cout <<"第" << cnt++ << "条预约\t";//cnt先输出再加
				//打印预约 0表示不打印学号和姓名
				orderFile.printOrder(m_data, 0);
				
			
			}
		}
	}

	cout << "请输入取消的预约，0表示退出：" << endl;
	int select = 0;
	while (true) {
		select = getSelect();//获取选择

		//注意，后面select-1所以这里是<=v.size()
		if(select>=0&&select<=v.size()){
			//退出
			if (select == 0) {
				cout << "退出成功" << endl;
				break;
			}
			else {
				//cout << "记录所在位置：" << v[select - 1] << endl;
				
				//取出map容器 仅仅适用于判断 不能用于更改
				map<string, string> m_data = orderFile.m_orderData[v[select - 1]];
				//注意，如果是要更改map容器的，必须直接更改 不能改m_data

				//把v[select-1]这一条记录的status改为0 表示已取消
				orderFile.m_orderData[v[select - 1]]["status"] = "0";
				orderFile.updateOrder();

				//如果是预约成功的取消了，就要把机房里的预约数量-1
				if (m_data["status"] == "2") {
					//this->initCom();//不用再更新了
					vCom[stringToInt(m_data["roomId"])-1].m_orderNum --;
					this->updateComRoom();
				}

				cout << "已取消预约" << endl;
				break;
			}
		}
		cout << "输入有误，请重新输入！" << endl;
	}









}