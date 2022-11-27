#include"orderFile.h"
void OrderFile::loadOrder() {
	//��д�ļ�
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);
	string fData;//һ������

	

	while (ifs >> fData) {
		vector<string> v_data = loadData(fData);//�����ŷָ�
		//string date = v_data[0];//ԤԼ���� 
		//string interval = v_data[1];//ʱ��� 
		//string stuId = v_data[2];//ѧ����� 
		//string stuName = v_data[3];//ѧ������ 
		//string roomId = v_data[4];//������� 
		//string status = v_data[5];//ԤԼ״̬
		//cout << date << " " << interval << " " << stuId << " " << stuName << " " << roomId << " " << status << endl;

		map <string, string> m_data;//m_orderData���map
		string key;//��ʱ�ַ��� ���m_orderData�е�map��key
		string value;//��ʱ�ַ��� ���m_orderData�е�map��value
		for (int i = 0; i < v_data.size(); i++) {
			string data = v_data[i];//���key:value�����ַ���
			int pos = data.find(":");//ð�ŵ�λ��
			if (pos != -1) {
				//��ʾ�ҵ���
				//��0��ȡ��pos-1��λ�� �պ�pos��
				key = data.substr(0, pos);

				//1L��ʾ��long����1 ��ȡdata.size()-pos-1��  ��ȡ��ĩβ Ҳ����дsubstr(pos+1) 
				value = data.substr(pos + (long long)1, data.size() - pos - 1);

				m_data.insert(make_pair(key, value));
				//cout << key << ":" << value << endl;
			}

		}
		//ע���¼���Ǵ�0��ʼ��
		this->m_orderData.insert(make_pair(this->m_size, m_data));//��ŵ���������
		this->m_size++;//��¼��һ

	}
	ifs.close();

	//���Դ�ӡmap
	//map<int, map<string, string>>::iterator it;
	//map<string, string>::iterator mit;

	//for (it = m_orderData.begin(); it != m_orderData.end(); it++) {
	//	cout << "��" << it->first << "��ԤԼ��¼��" << endl;
	//	for (mit = it->second.begin(); mit != it->second.end(); mit++) {
	//		cout << mit->first << "\t" << mit->second << endl;
	//	}
	//	cout <<"---------------" << endl;
	//}
}