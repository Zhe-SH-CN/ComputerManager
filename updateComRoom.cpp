#include"teacher.h"
#include"student.h"
#include"administrator.h"
void Identity::updateComRoom() {
	//更新机房信息
	ofstream ofs(COMPUTER_FILE, ios::out | ios::trunc);//重建

	//遍历机房信息
	for (int i = 0; i < vCom.size(); i++) {
		ComputerRoom cr = vCom[i];
		ofs << cr.m_comId << "," << cr.m_maxNum << "," << cr.m_orderNum << "," << endl;
	}
	ofs.close();
}