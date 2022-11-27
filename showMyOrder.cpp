#include"student.h"
void Student::showMyOrder(){
	OrderFile orderFile;//创建对象的时候就会调用构造函数

	if (orderFile.m_size == 0) {
		cout << "无预约记录" << endl;
		return;
	}
	//分隔符
	cout <<orderFile.showMyOrderSep<< endl;
	for (int i = 0; i < orderFile.m_size; i++) {
		
		
		map<string, string> m_data=orderFile.m_orderData[i];
		if(stringToInt(m_data["stuId"])==this->m_id&&m_data["stuName"]==this->m_name) {
			//如果学号和姓名都匹配上了 说明是当前的人

			//打印预约，0表示不打印学号和姓名
			orderFile.printOrder(m_data, 0);
		}


	}

}