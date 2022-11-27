#include"ComputerManager.h"

void ComputerManager::Login(string fileName,int type) {
	Identity* person = NULL;//父类的指针 用于多态

	ifstream ifs;
	ofstream ofs;
	ifs.open(fileName, ios::in);//把文件读进来 in

	//文件不存在情况
	if (!ifs.is_open()) {
		if (fileName != ADMIN_FILE) {
			cout << "暂无账号记录，请联系管理员添加" << endl;
			ifs.close();
			ofs.open(fileName, ios::out|ios::trunc);//新建一个
			ofs.close();
			return;
		}
		else {
			//如果是管理员的话，就建立默认账号
			cout << "暂无管理员账号记录，正在新建管理员账号..." << endl;
			ofs.open(ADMIN_FILE, ios::out|ios::trunc);
			ofs << "admin,123456," << endl;
			ofs.close();
			cout << "账号创建成功，请使用默认管理员账号登录" << endl;
			ifs.open(fileName, ios::in);
		}
		
	}
	int id = 0;//编号 学号或者是职工号
	string name;//用户名
	string pwd;//密码
	switch (type)
	{
	case 1:
		cout << "请输入你的学号：" << endl;
		id=getSelect();
		break;
	case 2:
		cout << "请输入你的教职工号：" << endl;
		id=getSelect();
		break;
	default:
		break;
	}

	cout << "请输入用户名：" << endl;
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> pwd;

	//临时变量 存放文件读取到的数据
	int fId=-1;
	string fName="";
	string fPwd="";
	string fData="";//读取到的整行数据
	vector<string> v_data;//临时容器，存放截取的数据
	switch (type)
	{
	case 1://学生登录验证
		while (ifs >> fData) {
			v_data = loadData(fData);
			fId =stringToInt(v_data[0]);//v_data[0]先转const char * 再转整数
			fName = v_data[1];
			fPwd = v_data[2];
			//cout << "学号：" << fId << " 姓名：" << fName << " 密码：" << fPwd << endl;
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "学生验证登录成功！" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				this->stuMenu(person);//学生登录菜单
				return;
			}
		}
		
		break;
	case 2://教师登录验证
		while (ifs >> fData) {
			v_data = loadData(fData);
			fId = stringToInt(v_data[0]);//v_data[0]先转const char * 再转整数
			fName = v_data[1];
			fPwd = v_data[2];
			//cout << "学号：" << fId << " 姓名：" << fName << " 密码：" << fPwd << endl;
			if (id == fId && name == fName && pwd == fPwd) {
				cout << "教师验证登录成功！" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				this->teaMenu(person);//老师登录菜单
				return;
			}
		}
		
		break;
	case 3://管理员登录验证
		while (ifs >> fData) {
			v_data = loadData(fData);
			fName = v_data[0];
			fPwd = v_data[1];
			//cout << "学号：" << fId << " 姓名：" << fName << " 密码：" << fPwd << endl;
			if (name == fName && pwd == fPwd) {
				cout << "管理员验证登录成功！" << endl;
				system("pause");
				system("cls");

				person = new Administrator(name, pwd);
				this->adminMenu(person);//管理员登录菜单
				return;
			}
		}
		
		break;
	default:
		break;
	}
	cout << "验证登录失败！" << endl;
	

	
}