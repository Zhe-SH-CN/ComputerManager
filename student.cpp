#include "student.h"
Student::Student(){
	this->m_id = -1;
	this->m_name = "";
	this->m_pwd = "";
	this->initCom();
}

Student::Student(int id, string name, string pwd) :m_id(id) {
	this->m_name = name;
	this->m_pwd = pwd;
	this->initCom();
}