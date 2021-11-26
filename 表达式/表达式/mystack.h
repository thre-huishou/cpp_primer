 #define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<vector>
using namespace std;


class mystack
{
public:
	mystack();
	mystack(const int * p);
	mystack(const mystack& s);
	~mystack();

	void mypush(int num);
	void mypop();
	bool myfull();
	bool myempty();
	int mysize();

	void display();
private:
	int m_top;
	vector<int> m_stack;
};