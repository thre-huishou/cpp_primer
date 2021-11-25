#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;

//类类型
class string1;
//类外实现cout、cin的左移、右移运算法重载
ostream& operator<<(ostream& out, string1& str);

istream& operator>>(istream& in, string1& str);


class string1
{
	friend ostream& operator<<(ostream&, string1&);
	friend istream& operator>>(istream&, string1&);
public:
	//一组重载的构造函数
	string1();//默认构造
	string1(const char *);//传参构造
	string1(const string1&);//拷贝构造

	//一组重载的赋值操作符
	string1& operator=(const char*);
	string1& operator=(const string1&);

	//一组重载的等于操作符
	bool operator==(const char*);
	bool operator==(const string1&);

	//重载的下标操作符
	char& operator[](unsigned int);

	//成员访问函数
	unsigned int size();
	char* c_str();

private:
	unsigned int m_size;
	char* m_string;
};
