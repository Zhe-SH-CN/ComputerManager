#include"administrator.h"
void Administrator::showAdminAccount() {
	cout << endl << "----------------------------" << endl;
	cout << "����Ա�˺ţ�" << endl
		<< "����\t" << "����\t" << endl;
	for (int i = 0; i < vAdm.size(); i++) {
		cout << vAdm[i].m_name << "\t" << vAdm[i].m_pwd << endl;
	}
	cout << endl << "�ܼ�" << vAdm.size() << "������Ա�˺�" << endl;
	cout << endl << "----------------------------" << endl;
}