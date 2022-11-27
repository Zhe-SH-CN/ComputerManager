#include"ComputerManager.h"
#include"teacher.h"

void ComputerManager::teaMenu(Identity*& teacher) {
	while (true) {
		//教师菜单
		teacher->openMenu();

		//转为teacher属性
		Teacher* tea = (Teacher*)teacher;

		cout << "请输入你的选择：" << endl;
		
		int select = getSelect();//获取选择

		switch (select)
		{
		case 1:
			cout << "查看所有预约" << endl;
			tea->showAllOrder();
			break;
		case 2:
			cout << "审核预约" << endl;
			tea->validOrder();
			break;
		case 0:
			delete teacher;//因为是new出来的
			cout << "注销成功" << endl;
			return;

		default:
			cout << "输入有误！请重新输入" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
}