#include"administrator.h"
void Administrator::showAdminAccount() {
	cout << endl << "----------------------------" << endl;
	cout << "管理员账号：" << endl
		<< "姓名\t" << "密码\t" << endl;
	for (int i = 0; i < vAdm.size(); i++) {
		cout << vAdm[i].m_name << "\t" << vAdm[i].m_pwd << endl;
	}
	cout << endl << "总计" << vAdm.size() << "个管理员账号" << endl;
	cout << endl << "----------------------------" << endl;
}