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

int getSelect();//��ȡ�û�ѡ��

//�����ȡ��������fData ��һ�����ݰ����Ÿ�����ѹ��vector
vector<string> loadData(string fData);

//���ַ���תΪ���� ���ַ��ͷ���-1 stoi=string to int
int stringToInt(string data);
