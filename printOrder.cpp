#include"orderFile.h"
//flag�ж�Ҫ��ô��ӡ 0��ʾ���ô�ӡ����ѧ�� 1��Ҫ��ӡ����ѧ��
void OrderFile::printOrder(map<string,string>& m_data ,int flag) {
	switch (flag)
	{
	case 0: {
		//״̬ 0 ��ȡ�� 1 ����� 2 ���δͨ�� 0 ���δͨ��
		string status = this->m_status[stringToInt(m_data["status"])];//���б��л�ȡ��Ӧ״̬
		string week = this->m_week[stringToInt(m_data["date"])];


		cout << "ԤԼ���ڣ�" << week
			<< "\tʱ�Σ�" << (m_data["interval"] == "1" ? "����" : "����")
			<< "\t������" << m_data["roomId"] << "��"
			<< "\t״̬��" << status << endl
			<< "-----------------------------------------------------------------------------------" << endl;
		break;
	}
	case 1: {
		//״̬ 0 ��ȡ�� 1 ����� 2 ���δͨ�� 0 ���δͨ��
		string status = this->m_status[stringToInt(m_data["status"])];//���б��л�ȡ��Ӧ״̬
		string week = this->m_week[stringToInt(m_data["date"])];


		cout << "ԤԼ���ڣ�" << week
			<< "\tʱ�Σ�" << (m_data["interval"] == "1" ? "����" : "����")
			<< "\tѧ�ţ�" << m_data["stuId"]
			<< "\t������" << m_data["stuName"]
			<< "\t������" << m_data["roomId"] << "��"
			<< "\t״̬��" << status << endl
			<< "------------------------------------------------------------------------------------------------------------------" << endl;

		break;
	}
	default:
		break;
	}
}