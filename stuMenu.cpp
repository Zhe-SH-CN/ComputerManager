#include"ComputerManager.h"
void ComputerManager::stuMenu(Identity*& student) {
	while (true) {
		//ѧ���˵�
		student->openMenu();
		Student* stu = (Student*)student;
		cout << "���������ѡ��" << endl;
		int select = getSelect();
		switch (select)
		{
		case 1://����ԤԼ
			cout << "����ԤԼ" << endl;
			stu->applyOrder();
			break;
		case 2://�鿴����ԤԼ
			cout << "�鿴����ԤԼ" << endl;
			stu->showMyOrder();
			break;
		case 3://�鿴����ԤԼ
			cout << "�鿴����ԤԼ" << endl;
			stu->showAllOrder();
			break;
		case 4://ȡ��ԤԼ
			cout << "ȡ��ԤԼ" << endl;
			stu->cancelOrder();
			break;
		case 0:
			delete student;
			cout << "ע���ɹ�" << endl;
			return;
		default:
			cout << "������������������" << endl;
			break;
		}
		system("pause");
		system("cls");
	}
}