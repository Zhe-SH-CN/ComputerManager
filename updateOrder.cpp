#include"orderFile.h"
void OrderFile::updateOrder() {
	//������Ϣ

	//���û�оͽ���
	if (this->m_size == 0) {
		return;
	}

	//����������Ϣ
	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);//ɾ���ؽ�

	//ѭ��ԤԼ����
	for (int i = 0; i < m_size; i++) {
		//ȡ��ÿ��ԤԼ����������
		map<string, string> m_data = this->m_orderData[i];
		
		//������������
		for (int j = 0; j < this->m_orderAttr.size(); j++) {
			string key = this->m_orderAttr[j];//��ʱ���������map��keyֵ
			ofs << key << ":" << m_data[key] << ",";
		}
		ofs << endl;
	}
	ofs.close();
}