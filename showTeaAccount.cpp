#include"administrator.h"
void Administrator::showTeaAccount() {
	cout << endl << "----------------------------" << endl;
	cout << "��ʦ�˺ţ�" << endl
		<< "ְ����\t" << "����\t" << "����\t" << endl;
	for (int i = 0; i < vTea.size(); i++) {
		cout << vTea[i].m_empId << "\t" << vTea[i].m_name << "\t" << vTea[i].m_pwd << endl;
	}
	cout << endl << "�ܼ�" << vTea.size() << "����ʦ�˺�" << endl;
	cout << endl << "----------------------------" << endl;
}