#include"ComputerManager.h"

void ComputerManager::Login(string fileName,int type) {
	Identity* person = NULL;//�����ָ�� ���ڶ�̬

	ifstream ifs;
	ofstream ofs;
	ifs.open(fileName, ios::in);//���ļ������� in

	//�ļ����������
	if (!ifs.is_open()) {
		if (fileName != ADMIN_FILE) {
			cout << "�����˺ż�¼������ϵ����Ա���" << endl;
			ifs.close();
			ofs.open(fileName, ios::out|ios::trunc);//�½�һ��
			ofs.close();
			return;
		}
		else {
			//����ǹ���Ա�Ļ����ͽ���Ĭ���˺�
			cout << "���޹���Ա�˺ż�¼�������½�����Ա�˺�..." << endl;
			ofs.open(ADMIN_FILE, ios::out|ios::trunc);
			ofs << "admin,123456," << endl;
			ofs.close();
			cout << "�˺Ŵ����ɹ�����ʹ��Ĭ�Ϲ���Ա�˺ŵ�¼" << endl;
			ifs.open(fileName, ios::in);
		}
		
	}
	int id = 0;//��� ѧ�Ż�����ְ����
	string name;//�û���
	string pwd;//����
	switch (type)
	{
	case 1:
		cout << "���������ѧ�ţ�" << endl;
		id=getSelect();
		break;
	case 2:
		cout << "��������Ľ�ְ���ţ�" << endl;
		id=getSelect();
		break;
	default:
		break;
	}

	cout << "�������û�����" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> pwd;

	//��ʱ���� ����ļ���ȡ��������
	int fId=-1;
	string fName="";
	string fPwd="";
	string fData="";//��ȡ������������
	vector<string> v_data;//��ʱ��������Ž�ȡ������
	switch (type)
	{
	case 1://ѧ����¼��֤
		while (ifs >> fData) {
			v_data = loadData(fData);
			fId =stringToInt(v_data[0]);//v_data[0]��תconst char * ��ת����
			fName = v_data[1];
			fPwd = v_data[2];
			//cout << "ѧ�ţ�" << fId << " ������" << fName << " ���룺" << fPwd << endl;
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "ѧ����֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				this->stuMenu(person);//ѧ����¼�˵�
				return;
			}
		}
		
		break;
	case 2://��ʦ��¼��֤
		while (ifs >> fData) {
			v_data = loadData(fData);
			fId = stringToInt(v_data[0]);//v_data[0]��תconst char * ��ת����
			fName = v_data[1];
			fPwd = v_data[2];
			//cout << "ѧ�ţ�" << fId << " ������" << fName << " ���룺" << fPwd << endl;
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "��ʦ��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				this->teaMenu(person);//��ʦ��¼�˵�
				return;
			}
		}
		
		break;
	case 3://����Ա��¼��֤
		while (ifs >> fData) {
			v_data = loadData(fData);
			fName = v_data[0];
			fPwd = v_data[1];
			//cout << "ѧ�ţ�" << fId << " ������" << fName << " ���룺" << fPwd << endl;
			if (name == fName && pwd == fPwd) {
				cout << "����Ա��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");

				person = new Administrator(name, pwd);
				this->adminMenu(person);//����Ա��¼�˵�
				return;
			}
		}
		
		break;
	default:
		break;
	}
	cout << "��֤��¼ʧ�ܣ�" << endl;
	

	
}