#include"ComputerManager.h"
//����Ա�˵�
	//Identity *&value���ǽ���ָ���������ȥ���൱�ڴ����ָ��ĵ�ַ�����Ը�ָ�����Ϊ��ָ��
void ComputerManager::adminMenu(Identity *&administrator) {
	while (true) {
		//����Ա�˵�
		administrator->openMenu();

		//תΪAdministratorָ��

		Administrator* admin = (Administrator*)administrator;
		cout << "���������ѡ��:" << endl;
		int select =getSelect();//ѡ��

		
		switch (select)
		{
		case 1://����˺�
			cout << "����˺�" << endl;
			admin->addAccount();
			break;
		case 2://�鿴�˺�
			cout << "�鿴�˺�" << endl;
			admin->showAccount();
			break;
		case 3://�鿴����
			cout << "�鿴����" << endl;
			admin->showComputerRoom();
			break;
		case 4://���ԤԼ
			cout << "���ԤԼ" << endl;
			admin->clearOrder();
			break;
		case 0://ע��
			delete administrator;
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