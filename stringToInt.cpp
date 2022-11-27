#include"computer.h"
int stringToInt(string data) {
	int res = 0;
	for (int i = 0; i < data.size(); i++) {
		if (data[i] >= '0' && data[i] <= '9') {
			res *= 10;
			res += (int)(data[i] - '0');
		}
		//ÓÐÆäËû×Ö·û
		else {
			return -1;
		}

	}
	return res;
}