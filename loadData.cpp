#include"computer.h"
//�����ȡ�������� ��һ�����ݰ����Ÿ�����ѹ��vector
vector<string> loadData(string fData) {
	int start = 0, pos = -1;//��¼�ļ��ж��ŵ�λ��
	vector<string> v_data;
	while (true) {
		pos = fData.find(',', start);
		if (pos == -1) { break; }//�Ҳ���������
		string temp = fData.substr(start, pos - start);//��һ��������ʼλ�ã��ڶ����ǳ���
		v_data.push_back(temp);
		start = pos + 1;

	}
	return v_data;
}