#include"administrator.h"
#include"student.h"
#include"teacher.h"
#include"orderFile.h"
void Administrator::initVector() {
	//��ȡѧ���ļ�
	ifstream ifs;
	ofstream ofs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open()) {
		cout << "ѧ���ļ�������,�����½�" << endl;
		ifs.close();
		ofs.open(STUDENT_FILE, ios::out | ios::trunc);//�½�һ��
		ofs.close();
		//return;
	}

	vStu.clear();
	vTea.clear();
	vAdm.clear();
	vCom.clear();

	Student s;
	string fData;//�����ʱ����
	vector<string> v_data;//��Ŵ���õ�����
	while (ifs >> fData) {
		v_data = loadData(fData);
		s.m_id = stringToInt(v_data[0]);
		s.m_name = v_data[1];
		s.m_pwd = v_data[2];
		vStu.push_back(s);
	}
	v_data.clear();
	//cout << "��ǰѧ��������" << vStu.size() << endl;
	ifs.close();//ѧ����ʼ������

	ifs.open(TEACHER_FILE, ios::in);//��ʦ��ʼ��
	if (!ifs.is_open()) {
		cout << "��ʦ�ļ�������,�����½�" << endl;
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
	//cout << "��ǰ��ʦ������" << vTea.size() << endl;
	v_data.clear();
	ifs.close();//��ʦ��ʼ������

	ifs.open(ADMIN_FILE, ios::in);//��ʼ������Ա
	if (!ifs.is_open()) {
		cout << "����Ա�ļ�������" << endl;
		ifs.close();
		ofs.open(ADMIN_FILE, ios::out | ios::trunc);//�½�
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
	//cout << "��ǰ����Ա������" << vAdm.size() << endl;
	v_data.clear();
	ifs.close();//����Ա��ʼ������

	//������Ϣ��ʼ��
	ifs.open(COMPUTER_FILE, ios::in);
	if (!ifs.is_open()) {
		cout << "�����ļ�������" << endl;
		ifs.close();
		ofs.open(COMPUTER_FILE, ios::out | ios::trunc);//�½�
		ofs.close();
		return;
	}
	ComputerRoom cr; 
	while(ifs>>fData){
		v_data = loadData(fData);
		cr.m_comId = stringToInt(v_data[0]);//¼��������
		cr.m_maxNum = stringToInt(v_data[1]);//�����������
		cr.m_orderNum = stringToInt(v_data[2]);//����ԤԼ����
		vCom.push_back(cr);
	}
	v_data.clear();

	ifs.close();//������Ϣ��ʼ������






}

void Student::initVector() {
	//��ȡ������Ϣ
	ifstream ifs(COMPUTER_FILE,ios::in);
	string fData;
	ComputerRoom cr;
	while(ifs>>fData){
		vector<string> v_data = loadData(fData);
		cr.m_comId = stringToInt(v_data[0]);//¼��������
		cr.m_maxNum = stringToInt(v_data[1]);//�����������
		cr.m_orderNum = stringToInt(v_data[2]);//����ԤԼ����
		vCom.push_back(cr);
	}
	ifs.close();
}


void Teacher::initVector() {
	//��ȡ������Ϣ
	ifstream ifs(COMPUTER_FILE, ios::in);
	string fData;
	ComputerRoom cr;
	while (ifs >> fData) {
		vector<string> v_data = loadData(fData);
		cr.m_comId = stringToInt(v_data[0]);//¼��������
		cr.m_maxNum = stringToInt(v_data[1]);//�����������
		cr.m_orderNum = stringToInt(v_data[2]);//����ԤԼ����
		this->vCom.push_back(cr);
	}
	ifs.close();
}


void OrderFile::initVector() {
	//��ʼ��ԤԼ����vector
	this->m_orderAttr.clear();
	this->m_orderAttr.push_back("date");
	this->m_orderAttr.push_back("interval");
	this->m_orderAttr.push_back("stuId");
	this->m_orderAttr.push_back("stuName");
	this->m_orderAttr.push_back("roomId");
	this->m_orderAttr.push_back("status");

	//��ʼ������
	this->m_week.clear();
	this->m_week.push_back("");//û������0 ����
	this->m_week.push_back("����һ");
	this->m_week.push_back("���ڶ�");
	this->m_week.push_back("������");
	this->m_week.push_back("������");
	this->m_week.push_back("������");
	this->m_week.push_back("������");

	//��ʼ��״̬�б�
	this->m_status.clear();
	this->m_status.push_back("��ȡ��");	//0����ȡ��
	this->m_status.push_back("�����"); //1�������
	this->m_status.push_back("ԤԼ�ɹ�");//2��ԤԼ�ɹ�
	this->m_status.push_back("���δͨ��");//3 �����δͨ��


}