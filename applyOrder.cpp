#include"student.h"
void Student::applyOrder() {


	//预约时间
	cout << "机房开放时间为周一到周五！" << endl
		<< " -------------------------------" << endl
		<< "|                               |" << endl
		<< "|          1.周    一           |" << endl
		<< "|          2.周    二           |" << endl
		<< "|          3.周    三           |" << endl
		<< "|          4.周    四           |" << endl
		<< "|          5.周    五           |" << endl
		<< "|          0.退    出           |" << endl
		<< "|                               |" << endl
		<< " -------------------------------" << endl;
		//<< "请输入申请预约时间：" << endl;

	string sDate = "";//星期
	int date;

	while (true) {
		cout<< "请输入申请预约时间：" ;
		cin >> sDate;
		date = stringToInt(sDate);
		if (sDate=="0") {
			cout << "退出成功" << endl;
			return;
		}
		if (date>=1&&date<=5) {
			break;//有效输入
		}
		cout << "输入有误，请重新输入！" << endl
			<<"------------------------" << endl;
	}


	//预约时间段
	cout << " -------------------------------" << endl
		<<"请输入申请预约时间段："<<endl
		<< " -------------------------------" << endl
		<< "|                               |" << endl
		<< "|          1.上    午           |" << endl
		<< "|          2.下    午           |" << endl
		<< "|          0.退    出           |" << endl
		<< "|                               |" << endl
		<< " -------------------------------" << endl;
	string sInterval = "";//上午还是下午
	int interval;
	while (true) {
		cout<<"请输入预约时间段：";
		cin >> sInterval;
		interval =stringToInt(sInterval);
		if (sInterval == "0") {
			cout << "退出成功" << endl;
			return;
		}
		if (interval >= 1 &&interval <= 2) {
			break;//满足
		}
		cout << "输入有误！请重新输入！" << endl
			<< "-----------------------" << endl;
	}

	//预约机房
	cout << "请选择机房（输入0退出）：" << endl
		<< "--------------------------------------------" << endl
		<< "机房编号\t| 机房容量\t| 已有预约" << endl;
	for (int i = 0; i < vCom.size(); i++) {
		cout << vCom[i].m_comId << "\t\t| " << vCom[i].m_maxNum << "\t\t| " << vCom[i].m_orderNum << endl;
	}
	cout << "--------------------------------------------" << endl;


	string sRoom = "";//机房编号
	int room = -1;
	while (true) {
		cout << "请输入申请预约机房：";
		cin >> sRoom;
		room = stringToInt(sRoom);
		if (sRoom == "0") {
			cout << "退出成功" << endl;
			return;
		}
		if (room >= 1 && room <= vCom.size()) {
			
			//索引这里要-1
			if (this->vCom[room-1].m_orderNum < this->vCom[room-1].m_maxNum) {
				//机房未满
				break;//有效输入
			}
			cout<<"此机房已满，请选择其他机房！"<<endl
				<<"------------------------" << endl;
		}
		cout << "输入有误，请重新输入！" << endl
			<< "------------------------" << endl;
	}

	cout << "预约成功！审核中！" << endl;

	//保存到文件中
	ofstream ofs(ORDER_FILE, ios::out|ios::app);//追加方式
	ofs << "date:" << date << ","
		<< "interval:" << interval << ","
		<< "stuId:" << this->m_id << ","
		<< "stuName:" << this->m_name << ","
		<< "roomId:" << room << ","
		<< "status:" << 1 <<","<< endl;
	ofs.close();


}