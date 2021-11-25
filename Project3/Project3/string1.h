#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;

//������
class string1;
//����ʵ��cout��cin�����ơ��������㷨����
ostream& operator<<(ostream& out, string1& str);

istream& operator>>(istream& in, string1& str);


class string1
{
	friend ostream& operator<<(ostream&, string1&);
	friend istream& operator>>(istream&, string1&);
public:
	//һ�����صĹ��캯��
	string1();//Ĭ�Ϲ���
	string1(const char *);//���ι���
	string1(const string1&);//��������

	//һ�����صĸ�ֵ������
	string1& operator=(const char*);
	string1& operator=(const string1&);

	//һ�����صĵ��ڲ�����
	bool operator==(const char*);
	bool operator==(const string1&);

	//���ص��±������
	char& operator[](unsigned int);

	//��Ա���ʺ���
	unsigned int size();
	char* c_str();

private:
	unsigned int m_size;
	char* m_string;
};
