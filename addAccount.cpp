#include"administrator.h"
//����˺� �������ظ�
void Administrator::addAccount(){
	cout << "Ҫ��Ӷ��ٸ��˺ţ�" << endl << "������";
	int cnt = getSelect();
	for (int i = 1; i <= cnt; i++) {
		system("cls");
		this->openMenu();
		
		cout << "Ŀǰ���ڽ��е�" << i << "���˺Ŵ�������"<<cnt<<"���˺�" << endl;
		cout << "����������˺ŵ�����" << endl
			<< "1.���ѧ��" << endl
			<< "2.�����ʦ" << endl
			<< "3.��ӹ���Ա" << endl
			<< "0.��ǰ�˳�" << endl
			<<endl<<"���ͣ�";

		string fileName;//��Ӧ�ļ�·��
		string errorTip;//�ظ�������ʾ

		int select = getSelect();
		int id=-1;
		string name, pwd;
		bool isRepeat=true;//�ж��Ƿ��ظ�
		switch (select)
		{
		case 1:
			fileName = STUDENT_FILE;
			cout << "������ѧ�ţ�" << endl;
			cin >> id;//����ѧ�Ż���ְ����
			id = abs(id);//��ֹ�и���
			errorTip = "ѧ���ظ�������������";
			
			break;
		case 2:
			fileName = TEACHER_FILE;
			cout << "������ְ����ţ�" << endl;
			cin >> id;//����ѧ�Ż���ְ����
			id = abs(id);
			errorTip = "ְ�����ظ�������������";
			
			break;
		case 3:
			fileName = ADMIN_FILE;
			errorTip = "����Ա�����ظ�������������";
			break;
		case 0:
			cout << "�˳��ɹ���" << endl;
			return;
			break;
		default:
			break;
		}
		cout << "������������" << endl;
		cin >> name;
		cout << "���������룺" << endl;
		cin >> pwd;
		//�ж��Ƿ����ظ�
		switch (select)
		{
		//ѧ������ʦ���Ǽ��id
		case 1:
		case 2:
			isRepeat = this->checkRepeat(id, select);
			break;
		//����Ա���name
		case 3:
			isRepeat = this->checkRepeat(name, select);
			break;
		default:
			break;
		}
		//������ظ�
		if (isRepeat) {
			cout << errorTip << endl;
			system("pause");
			system("cls");
			i--;//���¼��������
			continue;
		}
		else {
			//��Ҫд���ļ�
			ofstream ofs;
			ofs.open(fileName, ios::out | ios::app);//��append׷�ӷ�ʽд

			if (id == -1) {
				//��ʾ�ǹ���Ա ��������id
				ofs << name << "," << pwd << "," << endl;
			}
			else {
				ofs << id << "," << name << "," << pwd << "," << endl;
			}

			ofs.close();
			cout << "��ӳɹ�!" << endl;

			this->initVector();//��ʼ�����������¼�����Ա�б�
			
			//���һ����Ӳ�����ͣ
			if (i < cnt) {
				system("pause");
				system("cls");
			}
		}


		
		
	}

	


}