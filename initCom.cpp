#include"student.h"
#include"administrator.h"
#include"teacher.h"
void Identity::initCom() {
	//��ȡ������Ϣ
	ifstream ifs(COMPUTER_FILE, ios::in);
	string fData;
	ComputerRoom cr;
	this->vCom.clear();
	while (ifs >> fData) {
		vector<string> v_data = loadData(fData);
		cr.m_comId = stringToInt(v_data[0]);//¼��������
		cr.m_maxNum = stringToInt(v_data[1]);//�����������
		cr.m_orderNum = stringToInt(v_data[2]);//����ԤԼ����
		vCom.push_back(cr);
	}
	ifs.close();
}