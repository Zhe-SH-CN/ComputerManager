#include"orderFile.h"
void OrderFile::updateOrder() {
	//更新信息

	//如果没有就结束
	if (this->m_size == 0) {
		return;
	}

	//更新所有信息
	ofstream ofs(ORDER_FILE, ios::out | ios::trunc);//删掉重建

	//循环预约条数
	for (int i = 0; i < m_size; i++) {
		//取出每个预约里所有内容
		map<string, string> m_data = this->m_orderData[i];
		
		//遍历所有属性
		for (int j = 0; j < this->m_orderAttr.size(); j++) {
			string key = this->m_orderAttr[j];//临时变量，存放map的key值
			ofs << key << ":" << m_data[key] << ",";
		}
		ofs << endl;
	}
	ofs.close();
}