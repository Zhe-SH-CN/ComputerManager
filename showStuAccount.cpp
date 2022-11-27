#include"administrator.h"
void Administrator::showStuAccount() {
	cout << endl << "----------------------------" << endl;
	cout << "学生账号：" << endl
		<< "学号\t" << "姓名\t" << "密码\t" << endl;
	for (int i = 0; i < vStu.size(); i++) {
		cout << vStu[i].m_id << "\t" << vStu[i].m_name << "\t" << vStu[i].m_pwd << endl;
	}
	cout << endl << "总计" << vStu.size() << "个学生账号" << endl;
	cout << endl << "----------------------------" << endl;
	
}