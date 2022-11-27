#include"administrator.h"
#include"student.h"
#include"teacher.h"
#include"orderFile.h"
void Administrator::initVector() {
	//读取学生文件
	ifstream ifs;
	ofstream ofs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open()) {
		cout << "学生文件不存在,正在新建" << endl;
		ifs.close();
		ofs.open(STUDENT_FILE, ios::out | ios::trunc);//新建一个
		ofs.close();
		//return;
	}

	vStu.clear();
	vTea.clear();
	vAdm.clear();
	vCom.clear();

	Student s;
	string fData;//存放临时数据
	vector<string> v_data;//存放处理好的数据
	while (ifs >> fData) {
		v_data = loadData(fData);
		s.m_id = stringToInt(v_data[0]);
		s.m_name = v_data[1];
		s.m_pwd = v_data[2];
		vStu.push_back(s);
	}
	v_data.clear();
	//cout << "当前学生数量：" << vStu.size() << endl;
	ifs.close();//学生初始化结束

	ifs.open(TEACHER_FILE, ios::in);//老师初始化
	if (!ifs.is_open()) {
		cout << "教师文件不存在,正在新建" << endl;
		ifs.close();
		ofs.open(TEACHER_FILE, ios::out | ios::trunc);
		ofs.close();
		//return;
	}
	Teacher t;
	while (ifs >> fData) {
		v_data = loadData(fData);
		t.m_empId = stringToInt(v_data[0]);
		t.m_name = v_data[1];
		t.m_pwd = v_data[2];
		vTea.push_back(t);
	}
	//cout << "当前教师数量：" << vTea.size() << endl;
	v_data.clear();
	ifs.close();//教师初始化结束

	ifs.open(ADMIN_FILE, ios::in);//初始化管理员
	if (!ifs.is_open()) {
		cout << "管理员文件不存在" << endl;
		ifs.close();
		ofs.open(ADMIN_FILE, ios::out | ios::trunc);//新建
		ofs.close();
		return;
	}
	Administrator a;
	while (ifs>> fData) {
		v_data = loadData(fData);
		a.m_name = v_data[0];
		a.m_pwd = v_data[1];
		vAdm.push_back(a);
	}
	//cout << "当前管理员数量：" << vAdm.size() << endl;
	v_data.clear();
	ifs.close();//管理员初始化结束

	//机房信息初始化
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open()) {
		cout << "机房文件不存在" << endl;
		ifs.close();
		ofs.open(COMPUTER_FILE, ios::out | ios::trunc);//新建
		ofs.close();
		return;
	}
	ComputerRoom cr; 
	while(ifs>>fData){
		v_data = loadData(fData);
		cr.m_comId = stringToInt(v_data[0]);//录入机房编号
		cr.m_maxNum = stringToInt(v_data[1]);//机房最大人数
		cr.m_orderNum = stringToInt(v_data[2]);//机房预约数量
		vCom.push_back(cr);
	}
	v_data.clear();

	ifs.close();//机房信息初始化结束






}

void Student::initVector() {
	//获取机房信息
	ifstream ifs(COMPUTER_FILE,ios::in);
	string fData;
	ComputerRoom cr;
	while(ifs>>fData){
		vector<string> v_data = loadData(fData);
		cr.m_comId = stringToInt(v_data[0]);//录入机房编号
		cr.m_maxNum = stringToInt(v_data[1]);//机房最大人数
		cr.m_orderNum = stringToInt(v_data[2]);//机房预约数量
		vCom.push_back(cr);
	}
	ifs.close();
}


void Teacher::initVector() {
	//获取机房信息
	ifstream ifs(COMPUTER_FILE, ios::in);
	string fData;
	ComputerRoom cr;
	while (ifs >> fData) {
		vector<string> v_data = loadData(fData);
		cr.m_comId = stringToInt(v_data[0]);//录入机房编号
		cr.m_maxNum = stringToInt(v_data[1]);//机房最大人数
		cr.m_orderNum = stringToInt(v_data[2]);//机房预约数量
		this->vCom.push_back(cr);
	}
	ifs.close();
}


void OrderFile::initVector() {
	//初始化预约属性vector
	this->m_orderAttr.clear();
	this->m_orderAttr.push_back("date");
	this->m_orderAttr.push_back("interval");
	this->m_orderAttr.push_back("stuId");
	this->m_orderAttr.push_back("stuName");
	this->m_orderAttr.push_back("roomId");
	this->m_orderAttr.push_back("status");

	//初始化星期
	this->m_week.clear();
	this->m_week.push_back("");//没有星期0 留空
	this->m_week.push_back("星期一");
	this->m_week.push_back("星期二");
	this->m_week.push_back("星期三");
	this->m_week.push_back("星期四");
	this->m_week.push_back("星期五");
	this->m_week.push_back("星期六");

	//初始化状态列表
	this->m_status.clear();
	this->m_status.push_back("已取消");	//0是已取消
	this->m_status.push_back("审核中"); //1是审核中
	this->m_status.push_back("预约成功");//2是预约成功
	this->m_status.push_back("审核未通过");//3 是审核未通过


}