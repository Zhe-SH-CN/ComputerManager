#pragma once
#include"computer.h"
#include"Identity.h"
#include"student.h"
#include"teacher.h"
#include"administrator.h"
class ComputerManager
{
public:
	ComputerManager();

	//��ʾ�˵�
	void showMenu();

	//��¼���� fileName�ǲ������ļ��� type�ǵ�¼�����
	void Login(string fileName, int type);


	//����Ա�˵�
	//Identity *&value���ǽ���ָ���������ȥ���൱�ڴ����ָ��ĵ�ַ�����Ը�ָ�����Ϊ��ָ��
	void adminMenu(Identity*& administrator);

	//ѧ���˵�
	void stuMenu(Identity*& student);

	//��ʦ�˵�
	void teaMenu(Identity*& teacher);





	//�˳�����
	void exitSystem();

	~ComputerManager();
};

