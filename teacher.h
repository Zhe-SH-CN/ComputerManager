#pragma once
#include"Identity.h"
#include"computerRoom.h"
class Teacher:public Identity
{
public:
	Teacher();

	Teacher(int empId, string name, string pwd);

	//菜单界面
	virtual void openMenu();

	//查看所有预约
	void showAllOrder();
	
	//审核预约
	void validOrder();


	int m_empId;//教职工号
};

