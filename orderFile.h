#pragma once
#include"computer.h"
#include"globalFile.h"
//��ʾԤԼ��¼�����¼�¼��������¼
class OrderFile
{
public:
	//���캯��
	OrderFile();

	//��ȡ����ԤԼ
	void loadOrder();

	//��ʼ����������
	void initVector();

	//����ԤԼ��¼ ��Ҫ�Ǹ������״̬
	void updateOrder();


	//��װ��ӡorder m_data��Ҫ��ӡ��һ��ԤԼ flag�ж�Ҫ��ô��ӡ 0��ʾ���ô�ӡ����ѧ�� 1��Ҫ��ӡ����ѧ��
	void printOrder(map<string,string>&m_data,int flag);

	//��¼������ key --��¼������ value--�����¼�ļ�ֵ�� ��¼���Ǵ�0��ʼ��
	map<int, map<string, string>> m_orderData;

	//ԤԼ��¼����
	int m_size;

	//��¼һ��ԤԼ������Щ���� ��StuId stuName��
	vector<string> m_orderAttr;
	
	//��¼���ڶ�Ӧ��ϵ
	vector<string> m_week;
	//��¼״̬��Ӧ��ϵ 0-��ȡ�� 1-����� 2-ԤԼ�ɹ� 3-���δͨ��
	vector<string> m_status;



	//�ָ���
	string showMyOrderSep="-----------------------------------------------------------------------------------" ;
	string showAllOrderSep = "------------------------------------------------------------------------------------------------------------------";



};

