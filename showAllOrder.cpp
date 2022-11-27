#include"student.h"
#include"teacher.h"
void Student::showAllOrder(){
	OrderFile orderFile;//创建对象的时候就会调用构造函数

	if (orderFile.m_size == 0) {
		cout << "无预约记录" << endl;
		return;
	}

	cout << orderFile.showAllOrderSep << endl;
	for (int i = 0; i < orderFile.m_size; i++) {
		cout << "第" << i + 1 << "条预约记录：\t" ;

		map<string, string> m_data = orderFile.m_orderData[i];
		
		//要显示学号和姓名
		
		//打印预约，1表示打印学号和姓名
		orderFile.printOrder(m_data, 1);


	}
}
void Teacher::showAllOrder(){
	//与学生的showAllOrder一样
	Student stu;
	stu.showAllOrder();
}