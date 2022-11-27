#include"administrator.h"
//管理员 显示账号
void Administrator::showAccount() {
	cout << "请输入要查看内容" << endl
		<< "1.查看所有学生" << endl
		<< "2.查看所有老师" << endl
		<< "3.查看所有管理员" << endl
		<< "4.查看所有账号" << endl
		<< "0.提前退出" << endl;
	cout << "请输入你的选择" << endl;
	int select = getSelect();
	switch (select)
	{
	case 1:
		this->showStuAccount();
		break;
	case 2:
		this->showTeaAccount();
		break;
	case 3:
		this->showAdminAccount();
		break;
	case 4:
		this->showStuAccount();
		this->showTeaAccount();
		this->showAdminAccount();
		break;
	case 0:
		cout << "提前退出" << endl;
	default:
		break;
	}


}