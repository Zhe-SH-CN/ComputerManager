#include"administrator.h"
//����Ա �鿴����
void Administrator::showComputerRoom() {
	cout << "������Ϣ����" << endl<<endl
		<< "�������\t�������\tԤԼ����" << endl
		<<"-------------------------------------------"<<endl;
	
	vector<ComputerRoom>::iterator cit;
	
	for (cit = this->vCom.begin(); cit != this->vCom.end(); cit++) {
		cout << cit->m_comId << "\t\t" << cit->m_maxNum << "\t\t" << cit->m_orderNum << endl
			<< "-------------------------------------------" << endl;
	}

}