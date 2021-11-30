#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

namespace dqq
{
	class person
	{
	public:
		inline person(int age, string name) :m_age(age), m_name(name){}
		int m_age;
		string m_name;
		void speak();
	};
	int num;
}
void print();

