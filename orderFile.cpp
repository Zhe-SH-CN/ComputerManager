#include "orderFile.h"
OrderFile::OrderFile() {
	//清空order容器 
	this->m_orderData.clear();
	//把 预约条数置为0
	this->m_size = 0;

	this->initVector();//初始化预约属性

	this->loadOrder();//加载预约记录


}