#pragma once
#include"Identity.h"
#include"computerRoom.h"
#include"orderFile.h"
/*
* 学生类 继承Identity类
*/
class Student:public Identity
{
public:
	//默认构造
	Student();

	//有参构造 学号 姓名 密码
	Student(int id, string name, string pwd);

	//菜单界面
	virtual void openMenu();

	//申请预约
	void applyOrder();

	//查看我的预约
	void showMyOrder();

	//查看所有预约
	void showAllOrder();

	//取消预约
	void cancelOrder();

	//初始化容器
	void initCom();

	//更新机房信息 主要是更新预约
	void updateComRoom();


	
	//机房信息
	vector<ComputerRoom> vCom;

	int m_id;//学号

};

