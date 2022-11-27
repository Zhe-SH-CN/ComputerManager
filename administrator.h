#pragma once
#include"Identity.h"
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"
class Administrator:public Identity
{
public:
	Administrator();
	Administrator(string name, string pwd);

	//显示菜单
	virtual void openMenu();

	//添加账号
	void addAccount();

	//查看账号
	void showAccount();
	//查看老师账号
	void showTeaAccount();
	//查看学生账号
	void showStuAccount();
	//查看管理员账号
	void showAdminAccount();

	//查看机房
	void showComputerRoom();

	//清空预约
	void clearOrder();

	//初始化容器
	void initVector();

	//初始化机房
	void initCom();

	//检测重复 参数(传入id，传入类型） 返回值：（true 代表有重复，false代表没有重复）
	bool checkRepeat(int id, int type);
	bool checkRepeat(string name, int type);//重载，用于检测Admin


	//存放学生和老师的信息
	vector<Student> vStu;
	vector<Teacher> vTea;

	//存放管理员信息
	vector<Administrator> vAdm;

	//存放机房信息
	vector<ComputerRoom> vCom;
	

};

