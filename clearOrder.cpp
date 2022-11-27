#include"administrator.h"
//管理员 清空预约
void Administrator::clearOrder() {
	ifstream ifs(ORDER_FILE, ios::in);//读取下有没有预约文件
	ofstream ofs;
	if (!ifs.is_open()) {
		cout << "暂无预约记录，无需清空" << endl;
		ifs.close();
		ofs.open(ORDER_FILE, ios::out | ios::trunc);
		ofs.close();
		return;
	}
	//判断是否为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		cout << "暂无预约记录，无需清空" << endl;
		ifs.close();
		return;
	}
	else {
		ifs.putback(ch);//把这个字符放回去
		ifs.close();
	}



	
	cout << "是否确认清空预约记录？(y/N):";
	char select;
	cin >> select;
	switch (select)
	{
	case 'y':
	case 'Y':
		ofs.open(ORDER_FILE, ios::trunc);//通过trunc来重建
		cout << "清空完成" << endl;
		ofs.close();
		break;
	case 'n':
	case 'N':
	default:
		break;
	}

	
	
}