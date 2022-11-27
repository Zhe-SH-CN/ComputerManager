#pragma once
#include<iostream>
#include<algorithm>
#include<vector>
#include<ctime>
#include<set>
#include<vector>
#include<map>
#include<functional>
#include<numeric>
#include<deque>
#include<string>
#include<fstream>
#include"globalFile.h"

#define _CRT_SECURE_NO_WARNINGS 1

using namespace std;

int getSelect();//获取用户选择

//处理读取到的内容fData 将一行内容按逗号隔开，压入vector
vector<string> loadData(string fData);

//把字符串转为整数 有字符就返回-1 stoi=string to int
int stringToInt(string data);
