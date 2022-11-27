#include"computer.h"
int getSelect() {
	int select=0;
	string get;//为了判断是不是全是数字

	cin >> get;
	for (int i = 0; i < get.size(); i++) {
		if (get[i] >= '0' && get[i] <= '9') {
			select *= 10;
			select += (int)(get[i] - '0');
		}
		//有其他字符
		else {
			return -1;
		}
		
	}
	
	return select;
}