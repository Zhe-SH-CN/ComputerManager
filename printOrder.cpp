#include"orderFile.h"
//flag判断要怎么打印 0表示不用打印姓名学号 1是要打印姓名学号
void OrderFile::printOrder(map<string,string>& m_data ,int flag) {
	switch (flag)
	{
	case 0: {
		//状态 0 已取消 1 审核中 2 审核未通过 0 审核未通过
		string status = this->m_status[stringToInt(m_data["status"])];//从列表中获取对应状态
		string week = this->m_week[stringToInt(m_data["date"])];


		cout << "预约日期：" << week
			<< "\t时段：" << (m_data["interval"] == "1" ? "上午" : "下午")
			<< "\t机房：" << m_data["roomId"] << "号"
			<< "\t状态：" << status << endl
			<< "-----------------------------------------------------------------------------------" << endl;
		break;
	}
	case 1: {
		//状态 0 已取消 1 审核中 2 审核未通过 0 审核未通过
		string status = this->m_status[stringToInt(m_data["status"])];//从列表中获取对应状态
		string week = this->m_week[stringToInt(m_data["date"])];


		cout << "预约日期：" << week
			<< "\t时段：" << (m_data["interval"] == "1" ? "上午" : "下午")
			<< "\t学号：" << m_data["stuId"]
			<< "\t姓名：" << m_data["stuName"]
			<< "\t机房：" << m_data["roomId"] << "号"
			<< "\t状态：" << status << endl
			<< "------------------------------------------------------------------------------------------------------------------" << endl;

		break;
	}
	default:
		break;
	}
}