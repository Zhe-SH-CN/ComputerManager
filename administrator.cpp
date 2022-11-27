#include "administrator.h"
Administrator::Administrator() {
	this->m_name = "";
	this->m_pwd = "";
}
Administrator::Administrator(string name, string pwd) {
	this->m_name = name;
	this->m_pwd = pwd;

	//初始化容器
	this->initVector();
	//初始化机房
	this->initCom();
}