#include "computerRoom.h"
ComputerRoom::ComputerRoom():m_comId(0),m_maxNum(0),m_orderNum(0){}

ComputerRoom::ComputerRoom(int comId,int maxNum) :m_comId(comId), m_maxNum(maxNum), m_orderNum(0) {}

ComputerRoom::ComputerRoom(int comId,int maxNum,int orderNum) :m_comId(comId), m_maxNum(maxNum), m_orderNum(orderNum) {}