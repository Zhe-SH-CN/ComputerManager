#pragma once
#include"computer.h"
//������
class ComputerRoom
{
public:
	ComputerRoom();
	ComputerRoom(int comId, int maxNum);
	ComputerRoom(int comId, int maxNum, int orderNum);

	int m_comId;//����id��

	int m_maxNum;//�����������

	int m_orderNum;//�����Ѿ�ԤԼ����
};

