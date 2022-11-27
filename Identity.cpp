#include "Identity.h"
Identity::Identity() :m_name(""), m_pwd("") { this->initCom(); }
Identity::Identity(string name, string pwd) :m_name(name), m_pwd(pwd) { this->initCom(); }