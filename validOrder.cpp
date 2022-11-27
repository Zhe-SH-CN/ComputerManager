#include"teacher.h"
#include"orderFile.h"
void Teacher::validOrder(){
	//���ԤԼ
	OrderFile orderFile;
	if (orderFile.m_size == 0) {
		cout << "��ԤԼ��¼" << endl;
		return;
	}

	cout << endl << "����е�ԤԼ��¼����ͨ������δͨ������������˵ļ�¼" << endl;
	vector<int> v;
	int cnt = 1;//��¼ԤԼ����

	//�ָ���
	cout << orderFile.showMyOrderSep << endl;


	//ɸѡ��ȡ��ԤԼ
	for (int i = 0; i < orderFile.m_size; i++) {
		map<string, string> m_data = orderFile.m_orderData[i];
		
		//״̬�������
		if (m_data["status"] == "1") {
			v.push_back(i);
			cout << "��" << cnt++ << "��ԤԼ\t";//cnt������ټ�
			//��ӡԤԼ 1��ʾ��ӡѧ�ź�����
			orderFile.printOrder(m_data, 1);
		}
		
	}

	cout << "��������˵�ԤԼ��0��ʾ�˳���" << endl;
	int select = 0;
	while (true) {
		select = getSelect();//��ȡѡ��

		//�˳�
		if (select == 0) {
			cout << "�˳��ɹ�" << endl;
			break;
		}
		//ע�⣬����select-1����������<=v.size()
		else if (select > 0 && select <= v.size()) {
			//cout << "��¼����λ�ã�" << v[select - 1] << endl;

			


			cout << " -------------------------------" << endl
				<< "�������Ƿ�ͨ��ԤԼ��" << endl
				<< " -------------------------------" << endl
				<< "|                               |" << endl
				<< "|          1.ͨ    ��           |" << endl
				<< "|          2.δ ͨ ��           |" << endl
				<< "|          0.��    ��           |" << endl
				<< "|                               |" << endl
				<< " -------------------------------" << endl;

			cout << "���������ѡ��" << endl;
			int choice=-1;
			while (true) {
				choice = getSelect();
				//ȡ��map���� ע��ֻ�бȽϵ�ʱ�������m_data�����Ҫ���ģ���Ҫд orderFile.m_orderData[v[select - 1]]
				map<string, string> m_data = orderFile.m_orderData[v[select - 1]];
				
				//ԤԼ�Ļ��� ע��ֻ�бȽϵ�ʱ�������cr�����Ҫ���ģ���Ҫд vCom[stringToInt(m_data["roomId"]) - 1]
				ComputerRoom cr = vCom[stringToInt(m_data["roomId"]) - 1];

				if (choice == 0) {
					cout << "�˳��ɹ�" << endl;
					break;
				}
				else if (choice == 1) {
					this->initCom();
					//�ж�ԤԼ�����ǲ��������������
					if (cr.m_orderNum >= cr.m_maxNum) {
						cout << "ĿǰԤԼ�����������޷�ͨ��" << endl;
						break;
					}


					//����ԤԼ��Ϣ
					orderFile.m_orderData[v[select - 1]]["status"] = "2";
					orderFile.updateOrder();
					
					//���»�����Ϣ ע������Ҫ-1
					
					vCom[stringToInt(m_data["roomId"])-1].m_orderNum++;
					this->updateComRoom();

					cout << "�����ͨ��" << endl;

					break;
				}
				else if (choice == 2) {
					orderFile.m_orderData[v[select - 1]]["status"] = "3";
					orderFile.updateOrder();
					cout << "���δͨ��" << endl;
					break;
				}
				else {
					cout << "������������������" << endl;
				}
			}

			//�������ѭ�������ˣ�˵�����ǽ����ˣ�ֱ��break;
			break;
			
			
			
		}
		else {
			cout << "�����������������룡" << endl;
		}
		
	}

}