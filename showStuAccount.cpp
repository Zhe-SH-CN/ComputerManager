#include"administrator.h"
void Administrator::showStuAccount() {
	cout << endl << "----------------------------" << endl;
	cout << "ѧ���˺ţ�" << endl
		<< "ѧ��\t" << "����\t" << "����\t" << endl;
	for (int i = 0; i < vStu.size(); i++) {
		cout << vStu[i].m_id << "\t" << vStu[i].m_name << "\t" << vStu[i].m_pwd << endl;
	}
	cout << endl << "�ܼ�" << vStu.size() << "��ѧ���˺�" << endl;
	cout << endl << "----------------------------" << endl;
	
}