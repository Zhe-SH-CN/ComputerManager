#include"computer.h"
//处理读取到的内容 将一行内容按逗号隔开，压入vector
vector<string> loadData(string fData) {
	int start = 0, pos = -1;//记录文件中逗号的位置
	vector<string> v_data;
	while (true) {
		pos = fData.find(',', start);
		if (pos == -1) { break; }//找不到就跳出
		string temp = fData.substr(start, pos - start);//第一参数是起始位置，第二个是长度
		v_data.push_back(temp);
		start = pos + 1;

	}
	return v_data;
}