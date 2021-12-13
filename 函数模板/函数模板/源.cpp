#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
template<class T>
class person;


int main()
{
	person<int> p;
	p.m_age = 10;
	return 0;
}
template<class T>
class person
{
public:
	T m_age;
};