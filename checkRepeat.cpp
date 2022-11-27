#include"administrator.h"
bool Administrator::checkRepeat(int id,int type) {
	vector<Student>::iterator sIt;
	vector<Teacher>::iterator tIt;
	vector<Administrator>::iterator aIt;

	switch (type)
	{
	case 1: {
		for (sIt = this->vStu.begin(); sIt != this->vStu.end(); sIt++) {
			if (id == sIt->m_id) {
				return true;
			}
		}
		break;
	}
	case 2: {
		for (tIt = this->vTea.begin(); tIt != this->vTea.end(); tIt++) {
			if (id == tIt->m_empId) {
				return true;
			}
		}
		break;
	}
		
	default:
		break;
	}
	return false;

}
bool Administrator::checkRepeat(string name, int type) {
	vector<Student>::iterator sIt;
	vector<Teacher>::iterator tIt;
	vector<Administrator>::iterator aIt;

	switch (type)
	{
	case 1: {
		break;
	}
	case 2: {
		break;
	}
	case 3: {
		for (aIt = this->vAdm.begin(); aIt != this->vAdm.end(); aIt++) {
			if (name == aIt->m_name) {
				return true;
			}
		}
		break;
	}

	default:
		break;
	}
	return false;

	return false;
}
