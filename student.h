#pragma once
#include"Identity.h"
#include"computerRoom.h"
#include"orderFile.h"
/*
* ѧ���� �̳�Identity��
*/
class Student:public Identity
{
public:
	//Ĭ�Ϲ���
	Student();

	//�вι��� ѧ�� ���� ����
	Student(int id, string name, string pwd);

	//�˵�����
	virtual void openMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴�ҵ�ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	//��ʼ������
	void initCom();

	//���»�����Ϣ ��Ҫ�Ǹ���ԤԼ
	void updateComRoom();


	
	//������Ϣ
	vector<ComputerRoom> vCom;

	int m_id;//ѧ��

};

