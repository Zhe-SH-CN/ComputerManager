#include"student.h"
#include"administrator.h"
#include"teacher.h"
void Identity::initCom() {
	//获取机房信息
	ifstream ifs(COMPUTER_FILE, ios::in);
	string fData;
	ComputerRoom cr;
	this->vCom.clear();
	while (ifs >> fData) {
		vector<string> v_data = loadData(fData);
		cr.m_comId = stringToInt(v_data[0]);//录入机房编号
		cr.m_maxNum = stringToInt(v_data[1]);//机房最大人数
		cr.m_orderNum = stringToInt(v_data[2]);//机房预约数量
		vCom.push_back(cr);
	}
	ifs.close();
}