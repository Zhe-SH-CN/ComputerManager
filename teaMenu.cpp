#include"ComputerManager.h"
#include"teacher.h"

void ComputerManager::teaMenu(Identity*& teacher) {
	while (true) {
		//��ʦ�˵�
		teacher->openMenu();

		//תΪteacher����
		Teacher* tea = (Teacher*)teacher;

		cout << "���������ѡ��" << endl;
		
		int select = getSelect();//��ȡѡ��

		switch (select)
		{
		case 1:
			cout << "�鿴����ԤԼ" << endl;
			tea->showAllOrder();
			break;
		case 2:
			cout << "���ԤԼ" << endl;
			tea->validOrder();
			break;
		case 0:
			delete teacher;//��Ϊ��new������
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