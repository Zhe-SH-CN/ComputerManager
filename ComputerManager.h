#pragma once
#include"computer.h"
#include"Identity.h"
#include"student.h"
#include"teacher.h"
#include"administrator.h"
class ComputerManager
{
public:
	ComputerManager();

	//显示菜单
	void showMenu();

	//登录函数 fileName是操作的文件名 type是登录的身份
	void Login(string fileName, int type);


	//管理员菜单
	//Identity *&value则是将该指针变量传进去，相当于传入该指针的地址，所以该指针可以为空指针
	void adminMenu(Identity*& administrator);

	//学生菜单
	void stuMenu(Identity*& student);

	//教师菜单
	void teaMenu(Identity*& teacher);





	//退出程序
	void exitSystem();

	~ComputerManager();
};

