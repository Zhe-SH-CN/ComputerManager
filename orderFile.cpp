#include "orderFile.h"
OrderFile::OrderFile() {
	//���order���� 
	this->m_orderData.clear();
	//�� ԤԼ������Ϊ0
	this->m_size = 0;

	this->initVector();//��ʼ��ԤԼ����

	this->loadOrder();//����ԤԼ��¼


}