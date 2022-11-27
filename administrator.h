#pragma once
#include"Identity.h"
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"
class Administrator:public Identity
{
public:
	Administrator();
	Administrator(string name, string pwd);

	//��ʾ�˵�
	virtual void openMenu();

	//����˺�
	void addAccount();

	//�鿴�˺�
	void showAccount();
	//�鿴��ʦ�˺�
	void showTeaAccount();
	//�鿴ѧ���˺�
	void showStuAccount();
	//�鿴����Ա�˺�
	void showAdminAccount();

	//�鿴����
	void showComputerRoom();

	//���ԤԼ
	void clearOrder();

	//��ʼ������
	void initVector();

	//��ʼ������
	void initCom();

	//����ظ� ����(����id���������ͣ� ����ֵ����true �������ظ���false����û���ظ���
	bool checkRepeat(int id, int type);
	bool checkRepeat(string name, int type);//���أ����ڼ��Admin


	//���ѧ������ʦ����Ϣ
	vector<Student> vStu;
	vector<Teacher> vTea;

	//��Ź���Ա��Ϣ
	vector<Administrator> vAdm;

	//��Ż�����Ϣ
	vector<ComputerRoom> vCom;
	

};

