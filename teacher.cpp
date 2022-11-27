#include "teacher.h"
Teacher::Teacher() {
	this->m_empId = -1;
	this->m_name = "";
	this->m_pwd = "";
	this->initVector();
}
Teacher::Teacher(int empId, string name, string pwd) {
	this->m_empId = empId;
	this->m_name = name;
	this->m_pwd = pwd;
	this->initVector();
}