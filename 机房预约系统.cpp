#include"computer.h"
#include"ComputerManager.h"//机房管理类
#include"Identity.h"//身份类
#include"student.h"//学生类
#include"teacher.h"//教师类
#include"administrator.h"//管理员类
/*
* 机房预约系统
* 
* 身份简介：（多态）
* 学生代表：申请使用机房
* 教师：审核学生的预约申请
* 管理员：给学生、教师创建账号
* 
* 机房简介
* 1号机房--最大容量20人
* 2号机房--最大容量50人
* 3号机房--最大容量100人
* 
* 
* 申请简介：
* 1.申请的订单每周由管理员来负责清空
* 2.学生可以预约未来一周内的机房使用，预约的日期为周一到周五，预约时要选择预约时段（上午，下午）
* 3.教师来审核预约，依据实际情况来审核预约通过还是不通过
* 
* 系统具体要求:
* 1.首先进入登录界面，可选登录身份有
*	-学生代表
*	-教师
*	-管理员
*	-退出
* 2.每个身份都需要验证，进入子菜单
*	-学生需要输入：学号，姓名，登录密码
*	-教师需要输入：职工号，姓名，登录密码
*	-管理员需要输入：管理员姓名，登录密码
* 3.学生具体功能
*	-申请预约		--	预约机房
*	-查看自身的预约	--	查看自己的预约状态
*	-查看所有的预约	--	查看全部预约信息以及预约状态
*	-取消预约		--	取消自身的预约，预约成功或审核中的预约均可取消
*	-注销登录		--	退出登录
* 4.教师具体功能
*	-查看所有预约		--	查看全部预约信息以及预约状态
*	-审核预约		--	对学生的预约进行审核
*	-注销登录		--	退出登录
* 5.管理员具体功能
*	-添加账号		--	添加学生或者老师的账号，需要检测学生编号或者教职工号是否重复
*	-查看账号		--	可以选择查看学生或者教师的全部信息
*	-查看机房		--	查看所有机房的信息
*	-清空预约		--	清空所有的预约
*	-注销登录		--	退出登录
* 
* 
*/
int main() {
	//system("CHCP 65001");//改为UTF-8
	ComputerManager cm;
	while (true) {
		cm.showMenu();
		int select = getSelect();//记录用户选择
		//cout << select << endl;
		switch (select)
		{
		case 1://学生登录
			cm.Login(STUDENT_FILE, select);
			break;
		case 2://教师登录
			cm.Login(TEACHER_FILE, select);
			break;
		case 3://管理员登录
			cm.Login(ADMIN_FILE, select);
			break;
		case 0:
			cm.exitSystem();
			break;
		default:
			cout << "输入有误！请重新输入" << endl;
			break;
		}
		system("pause");
		system("cls");

	}




	return 0;
}