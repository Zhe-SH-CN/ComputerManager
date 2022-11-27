#pragma once
#include"computer.h"
#include"computerRoom.h"
/*
* 把老师 学生 管理员抽象出来成身份类 Identity
*/
class Identity
{
public:
	Identity();
	Identity(string name, string pwd);
	//操作菜单 纯虚函数
	virtual void openMenu() = 0;

	//更新机房信息
	//void updateComRoom();

	//初始化机房
	//void initVector();

	//存储机房信息
	vector<ComputerRoom> vCom;

	string m_name;//用户名
	string m_pwd;//密码

};

