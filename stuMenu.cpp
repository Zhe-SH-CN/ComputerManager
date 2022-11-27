#include"ComputerManager.h"
void ComputerManager::stuMenu(Identity*& student) {
	while (true) {
		//学生菜单
		student->openMenu();
		Student* stu = (Student*)student;
		cout << "请输入你的选择：" << endl;
		int select = getSelect();
		switch (select)
		{
		case 1://申请预约
			cout << "申请预约" << endl;
			stu->applyOrder();
			break;
		case 2://查看自身预约
			cout << "查看自身预约" << endl;
			stu->showMyOrder();
			break;
		case 3://查看所有预约
			cout << "查看所有预约" << endl;
			stu->showAllOrder();
			break;
		case 4://取消预约
			cout << "取消预约" << endl;
			stu->cancelOrder();
			break;
		case 0:
			delete student;
			cout << "注销成功" << endl;
			return;
		default:
			cout << "输入有误，请重新输入" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
}