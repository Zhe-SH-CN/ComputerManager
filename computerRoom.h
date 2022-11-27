#pragma once
#include"computer.h"
//机房类
class ComputerRoom
{
public:
	ComputerRoom();
	ComputerRoom(int comId, int maxNum);
	ComputerRoom(int comId, int maxNum, int orderNum);

	int m_comId;//机房id号

	int m_maxNum;//机房最大容量

	int m_orderNum;//机房已经预约数量
};

