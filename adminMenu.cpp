#include"ComputerManager.h"
//管理员菜单
	//Identity *&value则是将该指针变量传进去，相当于传入该指针的地址，所以该指针可以为空指针
void ComputerManager::adminMenu(Identity *&administrator) {
	while (true) {
		//管理员菜单
		administrator->openMenu();

		//转为Administrator指针

		Administrator* admin = (Administrator*)administrator;
		cout << "请输入你的选择:" << endl;
		int select =getSelect();//选择

		
		switch (select)
		{
		case 1://添加账号
			cout << "添加账号" << endl;
			admin->addAccount();
			break;
		case 2://查看账号
			cout << "查看账号" << endl;
			admin->showAccount();
			break;
		case 3://查看机房
			cout << "查看机房" << endl;
			admin->showComputerRoom();
			break;
		case 4://清空预约
			cout << "清空预约" << endl;
			admin->clearOrder();
			break;
		case 0://注销
			delete administrator;
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