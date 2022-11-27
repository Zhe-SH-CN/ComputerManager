#include"administrator.h"
void Administrator::showTeaAccount() {
	cout << endl << "----------------------------" << endl;
	cout << "教师账号：" << endl
		<< "职工号\t" << "姓名\t" << "密码\t" << endl;
	for (int i = 0; i < vTea.size(); i++) {
		cout << vTea[i].m_empId << "\t" << vTea[i].m_name << "\t" << vTea[i].m_pwd << endl;
	}
	cout << endl << "总计" << vTea.size() << "个教师账号" << endl;
	cout << endl << "----------------------------" << endl;
}