#include "administrator.h"
Administrator::Administrator() {
	this->m_name = "";
	this->m_pwd = "";
}
Administrator::Administrator(string name, string pwd) {
	this->m_name = name;
	this->m_pwd = pwd;

	//³õÊ¼»¯ÈÝÆ÷
	this->initVector();
}