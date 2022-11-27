#include"student.h"
#include"teacher.h"
#include"administrator.h"
void Student::openMenu() {
	cout << "欢迎学生：" << this->m_name << "登录！" << endl
		<< endl
		<< "\t\t\t -----------------------------------" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t|          1.申请预约               |" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t|          2.查看自己预约           |" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t|          3.查看所有预约           |" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t|          4.取消预约               |" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t|          0.注销登录               |" << endl
		<< "\t\t\t|                                   |" << endl
		<< "\t\t\t -----------------------------------" << endl;
	
}

void Teacher::openMenu(){
	cout << "欢迎教师：" << this->m_name << "登录！" << endl
		<< endl
		<< "\t\t\t -------------------------------" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          1.查看所有预约       |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          2.审核预约           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          0.注销登录           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t -------------------------------" << endl;

}

void Administrator::openMenu() {
	cout << "欢迎管理员：" << this->m_name << "登录！" << endl
		<< endl 
		<< "\t\t\t -------------------------------" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          1.添加账号           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          2.查看账号           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          3.查看机房           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          4.清空预约           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t|          0.注销登录           |" << endl
		<< "\t\t\t|                               |" << endl
		<< "\t\t\t -------------------------------" << endl;
		
}