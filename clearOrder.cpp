#include"administrator.h"
//����Ա ���ԤԼ
void Administrator::clearOrder() {
	ifstream ifs(ORDER_FILE, ios::in);//��ȡ����û��ԤԼ�ļ�
	ofstream ofs;
	if (!ifs.is_open()) {
		cout << "����ԤԼ��¼���������" << endl;
		ifs.close();
		ofs.open(ORDER_FILE, ios::out | ios::trunc);
		ofs.close();
		return;
	}
	//�ж��Ƿ�Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		cout << "����ԤԼ��¼���������" << endl;
		ifs.close();
		return;
	}
	else {
		ifs.putback(ch);//������ַ��Ż�ȥ
		ifs.close();
	}



	
	cout << "�Ƿ�ȷ�����ԤԼ��¼��(y/N):";
	char select;
	cin >> select;
	switch (select)
	{
	case 'y':
	case 'Y':
		ofs.open(ORDER_FILE, ios::trunc);//ͨ��trunc���ؽ�
		cout << "������" << endl;
		ofs.close();
		break;
	case 'n':
	case 'N':
	default:
		break;
	}

	
	
}