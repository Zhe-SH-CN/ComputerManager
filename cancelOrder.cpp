#include"student.h"
void Student::cancelOrder(){
	//ȡ��ԤԼ
	OrderFile orderFile;
	if (orderFile.m_size == 0) {
		cout << "��ԤԼ��¼" << endl;
		return;
	}

	cout <<endl<< "����еĻ���ԤԼ�ɹ���ԤԼ��¼����ȡ����������ȡ����ԤԼ��¼" << endl;
	vector<int> v;
	int cnt = 1;//��¼ԤԼ����

	//�ָ���
	cout << orderFile.showMyOrderSep << endl;


	//ɸѡ��ȡ��ԤԼ
	for (int i = 0; i < orderFile.m_size; i++) {
		map<string, string> m_data = orderFile.m_orderData[i];
		//�ж�ѧ�ź������ǲ����Լ�
		if (stringToInt(m_data["stuId"]) == this->m_id&&m_data["stuName"]==this->m_name) {
			//����������л���ԤԼ�ɹ�
			if (m_data["status"] == "1" || m_data["status"] == "2") {
				v.push_back(i);
				cout <<"��" << cnt++ << "��ԤԼ\t";//cnt������ټ�
				//��ӡԤԼ 0��ʾ����ӡѧ�ź�����
				orderFile.printOrder(m_data, 0);
				
			
			}
		}
	}

	cout << "������ȡ����ԤԼ��0��ʾ�˳���" << endl;
	int select = 0;
	while (true) {
		select = getSelect();//��ȡѡ��

		//ע�⣬����select-1����������<=v.size()
		if(select>=0&&select<=v.size()){
			//�˳�
			if (select == 0) {
				cout << "�˳��ɹ�" << endl;
				break;
			}
			else {
				//cout << "��¼����λ�ã�" << v[select - 1] << endl;
				
				//ȡ��map���� �����������ж� �������ڸ���
				map<string, string> m_data = orderFile.m_orderData[v[select - 1]];
				//ע�⣬�����Ҫ����map�����ģ�����ֱ�Ӹ��� ���ܸ�m_data

				//��v[select-1]��һ����¼��status��Ϊ0 ��ʾ��ȡ��
				orderFile.m_orderData[v[select - 1]]["status"] = "0";
				orderFile.updateOrder();

				//�����ԤԼ�ɹ���ȡ���ˣ���Ҫ�ѻ������ԤԼ����-1
				if (m_data["status"] == "2") {
					//this->initCom();//�����ٸ�����
					vCom[stringToInt(m_data["roomId"])-1].m_orderNum --;
					this->updateComRoom();
				}

				cout << "��ȡ��ԤԼ" << endl;
				break;
			}
		}
		cout << "�����������������룡" << endl;
	}









}