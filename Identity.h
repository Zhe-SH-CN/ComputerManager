#pragma once
#include"computer.h"
#include"computerRoom.h"
/*
* ����ʦ ѧ�� ����Ա�������������� Identity
*/
class Identity
{
public:
	Identity();
	Identity(string name, string pwd);
	//�����˵� ���麯��
	virtual void openMenu() = 0;

	//���»�����Ϣ
	//void updateComRoom();

	//��ʼ������
	//void initVector();

	//�洢������Ϣ
	vector<ComputerRoom> vCom;

	string m_name;//�û���
	string m_pwd;//����

};

