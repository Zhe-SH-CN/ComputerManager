#include"student.h"
#include"teacher.h"
void Student::showAllOrder(){
	OrderFile orderFile;//���������ʱ��ͻ���ù��캯��

	if (orderFile.m_size == 0) {
		cout << "��ԤԼ��¼" << endl;
		return;
	}

	cout << orderFile.showAllOrderSep << endl;
	for (int i = 0; i < orderFile.m_size; i++) {
		cout << "��" << i + 1 << "��ԤԼ��¼��\t" ;

		map<string, string> m_data = orderFile.m_orderData[i];
		
		//Ҫ��ʾѧ�ź�����
		
		//��ӡԤԼ��1��ʾ��ӡѧ�ź�����
		orderFile.printOrder(m_data, 1);


	}
}
void Teacher::showAllOrder(){
	//��ѧ����showAllOrderһ��
	Student stu;
	stu.showAllOrder();
}