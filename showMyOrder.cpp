#include"student.h"
void Student::showMyOrder(){
	OrderFile orderFile;//���������ʱ��ͻ���ù��캯��

	if (orderFile.m_size == 0) {
		cout << "��ԤԼ��¼" << endl;
		return;
	}
	//�ָ���
	cout <<orderFile.showMyOrderSep<< endl;
	for (int i = 0; i < orderFile.m_size; i++) {
		
		
		map<string, string> m_data=orderFile.m_orderData[i];
		if(stringToInt(m_data["stuId"])==this->m_id&&m_data["stuName"]==this->m_name) {
			//���ѧ�ź�������ƥ������ ˵���ǵ�ǰ����

			//��ӡԤԼ��0��ʾ����ӡѧ�ź�����
			orderFile.printOrder(m_data, 0);
		}


	}

}