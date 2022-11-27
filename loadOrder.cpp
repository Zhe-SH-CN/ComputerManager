#include"orderFile.h"
void OrderFile::loadOrder() {
	//读写文件
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);
	string fData;//一行数据

	

	while (ifs >> fData) {
		vector<string> v_data = loadData(fData);//按逗号分隔
		//string date = v_data[0];//预约日期 
		//string interval = v_data[1];//时间段 
		//string stuId = v_data[2];//学生编号 
		//string stuName = v_data[3];//学生姓名 
		//string roomId = v_data[4];//机房编号 
		//string status = v_data[5];//预约状态
		//cout << date << " " << interval << " " << stuId << " " << stuName << " " << roomId << " " << status << endl;

		map <string, string> m_data;//m_orderData里的map
		string key;//临时字符串 存放m_orderData中的map的key
		string value;//临时字符串 存放m_orderData中的map的value
		for (int i = 0; i < v_data.size(); i++) {
			string data = v_data[i];//存放key:value整个字符串
			int pos = data.find(":");//冒号的位置
			if (pos != -1) {
				//表示找到的
				//从0截取到pos-1的位置 刚好pos个
				key = data.substr(0, pos);

				//1L表示是long类型1 截取data.size()-pos-1个  截取到末尾 也可以写substr(pos+1) 
				value = data.substr(pos + (long long)1, data.size() - pos - 1);

				m_data.insert(make_pair(key, value));
				//cout << key << ":" << value << endl;
			}

		}
		//注意记录数是从0开始的
		this->m_orderData.insert(make_pair(this->m_size, m_data));//存放到大容器中
		this->m_size++;//记录加一

	}
	ifs.close();

	//测试打印map
	//map<int, map<string, string>>::iterator it;
	//map<string, string>::iterator mit;

	//for (it = m_orderData.begin(); it != m_orderData.end(); it++) {
	//	cout << "第" << it->first << "条预约记录：" << endl;
	//	for (mit = it->second.begin(); mit != it->second.end(); mit++) {
	//		cout << mit->first << "\t" << mit->second << endl;
	//	}
	//	cout <<"---------------" << endl;
	//}
}