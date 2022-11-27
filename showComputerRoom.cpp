#include"administrator.h"
//管理员 查看机房
void Administrator::showComputerRoom() {
	this->initCom();//重新获取机房信息
	cout << "机房信息如下" << endl<<endl
		<< "机房编号\t最大容量\t预约人数" << endl
		<<"-------------------------------------------"<<endl;
	
	vector<ComputerRoom>::iterator cit;
	
	for (cit = this->vCom.begin(); cit != this->vCom.end(); cit++) {
		cout << cit->m_comId << "\t\t" << cit->m_maxNum << "\t\t" << cit->m_orderNum << endl
			<< "-------------------------------------------" << endl;
	}

}