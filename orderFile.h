#pragma once
#include"computer.h"
#include"globalFile.h"
//显示预约记录，更新记录，创建记录
class OrderFile
{
public:
	//构造函数
	OrderFile();

	//获取已有预约
	void loadOrder();

	//初始化属性容器
	void initVector();

	//更新预约记录 主要是更新审核状态
	void updateOrder();


	//封装打印order m_data是要打印的一条预约 flag判断要怎么打印 0表示不用打印姓名学号 1是要打印姓名学号
	void printOrder(map<string,string>&m_data,int flag);

	//记录的容器 key --记录的条数 value--具体记录的键值对 记录数是从0开始的
	map<int, map<string, string>> m_orderData;

	//预约记录条数
	int m_size;

	//记录一条预约里有哪些属性 如StuId stuName等
	vector<string> m_orderAttr;
	
	//记录星期对应关系
	vector<string> m_week;
	//记录状态对应关系 0-已取消 1-审核中 2-预约成功 3-审核未通过
	vector<string> m_status;



	//分隔符
	string showMyOrderSep="-----------------------------------------------------------------------------------" ;
	string showAllOrderSep = "------------------------------------------------------------------------------------------------------------------";



};

