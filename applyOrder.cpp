#include"student.h"
void Student::applyOrder() {


	//ԤԼʱ��
	cout << "��������ʱ��Ϊ��һ�����壡" << endl
		<< " -------------------------------" << endl
		<< "|                               |" << endl
		<< "|          1.��    һ           |" << endl
		<< "|          2.��    ��           |" << endl
		<< "|          3.��    ��           |" << endl
		<< "|          4.��    ��           |" << endl
		<< "|          5.��    ��           |" << endl
		<< "|          0.��    ��           |" << endl
		<< "|                               |" << endl
		<< " -------------------------------" << endl;
		//<< "����������ԤԼʱ�䣺" << endl;

	string sDate = "";//����
	int date;

	while (true) {
		cout<< "����������ԤԼʱ�䣺" ;
		cin >> sDate;
		date = stringToInt(sDate);
		if (sDate=="0") {
			cout << "�˳��ɹ�" << endl;
			return;
		}
		if (date>=1&&date<=5) {
			break;//��Ч����
		}
		cout << "�����������������룡" << endl
			<<"------------------------" << endl;
	}


	//ԤԼʱ���
	cout << " -------------------------------" << endl
		<<"����������ԤԼʱ��Σ�"<<endl
		<< " -------------------------------" << endl
		<< "|                               |" << endl
		<< "|          1.��    ��           |" << endl
		<< "|          2.��    ��           |" << endl
		<< "|          0.��    ��           |" << endl
		<< "|                               |" << endl
		<< " -------------------------------" << endl;
	string sInterval = "";//���绹������
	int interval;
	while (true) {
		cout<<"������ԤԼʱ��Σ�";
		cin >> sInterval;
		interval =stringToInt(sInterval);
		if (sInterval == "0") {
			cout << "�˳��ɹ�" << endl;
			return;
		}
		if (interval >= 1 &&interval <= 2) {
			break;//����
		}
		cout << "�����������������룡" << endl
			<< "-----------------------" << endl;
	}

	//ԤԼ����
	cout << "��ѡ�����������0�˳�����" << endl
		<< "--------------------------------------------" << endl
		<< "�������\t| ��������\t| ����ԤԼ" << endl;
	for (int i = 0; i < vCom.size(); i++) {
		cout << vCom[i].m_comId << "\t\t| " << vCom[i].m_maxNum << "\t\t| " << vCom[i].m_orderNum << endl;
	}
	cout << "--------------------------------------------" << endl;


	string sRoom = "";//�������
	int room = -1;
	while (true) {
		cout << "����������ԤԼ������";
		cin >> sRoom;
		room = stringToInt(sRoom);
		if (sRoom == "0") {
			cout << "�˳��ɹ�" << endl;
			return;
		}
		if (room >= 1 && room <= vCom.size()) {
			
			//��������Ҫ-1
			if (this->vCom[room-1].m_orderNum < this->vCom[room-1].m_maxNum) {
				//����δ��
				break;//��Ч����
			}
			cout<<"�˻�����������ѡ������������"<<endl
				<<"------------------------" << endl;
		}
		cout << "�����������������룡" << endl
			<< "------------------------" << endl;
	}

	cout << "ԤԼ�ɹ�������У�" << endl;

	//���浽�ļ���
	ofstream ofs(ORDER_FILE, ios::out|ios::app);//׷�ӷ�ʽ
	ofs << "date:" << date << ","
		<< "interval:" << interval << ","
		<< "stuId:" << this->m_id << ","
		<< "stuName:" << this->m_name << ","
		<< "roomId:" << room << ","
		<< "status:" << 1 <<","<< endl;
	ofs.close();


}