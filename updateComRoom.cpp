#include"teacher.h"
#include"student.h"
#include"administrator.h"
void Teacher::updateComRoom() {
	//���»�����Ϣ
	ofstream ofs(COMPUTER_FILE, ios::out | ios::trunc);//�ؽ�

	//����������Ϣ
	for (int i = 0; i < vCom.size(); i++) {
		ComputerRoom cr = vCom[i];
		ofs << cr.m_comId << "," << cr.m_maxNum << "," << cr.m_orderNum << ","<<endl;
	}
	ofs.close();
}

void Student::updateComRoom() {
	//���»�����Ϣ
	ofstream ofs(COMPUTER_FILE, ios::out | ios::trunc);//�ؽ�

	//����������Ϣ
	for (int i = 0; i < vCom.size(); i++) {
		ComputerRoom cr = vCom[i];
		ofs << cr.m_comId << "," << cr.m_maxNum << "," << cr.m_orderNum << "," << endl;
	}
	ofs.close();
}