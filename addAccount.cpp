#include"administrator.h"
//添加账号 不能有重复
void Administrator::addAccount(){
	cout << "要添加多少个账号？" << endl << "个数：";
	int cnt = getSelect();
	for (int i = 1; i <= cnt; i++) {
		system("cls");
		this->openMenu();
		
		cout << "目前正在进行第" << i << "个账号创建，共"<<cnt<<"个账号" << endl;
		cout << "请输入添加账号的类型" << endl
			<< "1.添加学生" << endl
			<< "2.添加老师" << endl
			<< "3.添加管理员" << endl
			<< "0.提前退出" << endl
			<<endl<<"类型：";

		string fileName;//对应文件路径
		string errorTip;//重复错误提示

		int select = getSelect();
		int id=-1;
		string name, pwd;
		bool isRepeat=true;//判断是否重复
		switch (select)
		{
		case 1:
			fileName = STUDENT_FILE;
			cout << "请输入学号：" << endl;
			cin >> id;//输入学号或者职工号
			id = abs(id);//防止有负数
			errorTip = "学号重复，请重新输入";
			
			break;
		case 2:
			fileName = TEACHER_FILE;
			cout << "请输入职工编号：" << endl;
			cin >> id;//输入学号或者职工号
			id = abs(id);
			errorTip = "职工号重复，请重新输入";
			
			break;
		case 3:
			fileName = ADMIN_FILE;
			errorTip = "管理员名称重复，请重新输入";
			break;
		case 0:
			cout << "退出成功！" << endl;
			return;
			break;
		default:
			break;
		}
		cout << "请输入姓名：" << endl;
		cin >> name;
		cout << "请输入密码：" << endl;
		cin >> pwd;
		//判断是否有重复
		switch (select)
		{
		//学生和老师都是检测id
		case 1:
		case 2:
			isRepeat = this->checkRepeat(id, select);
			break;
		//管理员检测name
		case 3:
			isRepeat = this->checkRepeat(name, select);
			break;
		default:
			break;
		}
		//如果有重复
		if (isRepeat) {
			cout << errorTip << endl;
			system("pause");
			system("cls");
			i--;//重新计入这个人
			continue;
		}
		else {
			//打开要写的文件
			ofstream ofs;
			ofs.open(fileName, ios::out | ios::app);//以append追加方式写

			if (id == -1) {
				//表示是管理员 不用输入id
				ofs << name << "," << pwd << "," << endl;
			}
			else {
				ofs << id << "," << name << "," << pwd << "," << endl;
			}

			ofs.close();
			cout << "添加成功!" << endl;

			this->initVector();//初始化容器，重新加载人员列表
			
			//最后一次添加不用暂停
			if (i < cnt) {
				system("pause");
				system("cls");
			}
		}


		
		
	}

	


}