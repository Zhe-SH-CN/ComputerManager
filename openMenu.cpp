#include"student.h"
#include"teacher.h"
#include"administrator.h"
void Student::openMenu() {
	cout << "��ӭѧ����" << this->m_name << "��¼��" << endl
		<< endl
		<< "\t\t\t -----------------------------------" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t|          1.����ԤԼ               |" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t|          2.�鿴�Լ�ԤԼ           |" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t|          3.�鿴����ԤԼ           |" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t|          4.ȡ��ԤԼ               |" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t|          0.ע����¼               |" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t -----------------------------------" << endl;
	
}

void Teacher::openMenu(){
	cout << "��ӭ��ʦ��" << this->m_name << "��¼��" << endl
		<< endl
		<< "\t\t\t -------------------------------" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          1.�鿴����ԤԼ       |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          2.���ԤԼ           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          0.ע����¼           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t -------------------------------" << endl;

}

void Administrator::openMenu() {
	cout << "��ӭ����Ա��" << this->m_name << "��¼��" << endl
		<< endl 
		<< "\t\t\t -------------------------------" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          1.����˺�           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          2.�鿴�˺�           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          3.�鿴����           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          4.���ԤԼ           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          0.ע����¼           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t -------------------------------" << endl;
		
}