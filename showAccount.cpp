#include"administrator.h"
//����Ա ��ʾ�˺�
void Administrator::showAccount() {
	cout << "������Ҫ�鿴����" << endl
		<< "1.�鿴����ѧ��" << endl
		<< "2.�鿴������ʦ" << endl
		<< "3.�鿴���й���Ա" << endl
		<< "4.�鿴�����˺�" << endl
		<< "0.��ǰ�˳�" << endl;
	cout << "���������ѡ��" << endl;
	int select = getSelect();
	switch (select)
	{
	case 1:
		this->showStuAccount();
		break;
	case 2:
		this->showTeaAccount();
		break;
	case 3:
		this->showAdminAccount();
		break;
	case 4:
		this->showStuAccount();
		this->showTeaAccount();
		this->showAdminAccount();
		break;
	case 0:
		cout << "��ǰ�˳�" << endl;
	default:
		break;
	}


}