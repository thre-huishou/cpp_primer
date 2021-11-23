#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//extern double power(int, int);
//extern string name;
//int main()
//{
//	float Float = 10;
//	string name = "11111";
//	cout << power(2, -1) << endl;
//	int b;
//	int a = b = 10;
//	return 0;
//}

//
//class Person
//{
//private:
//	int age;
//public:
//	Person(int a)
//	{
//		age = a;
//	}
//	//拷贝构造函数不能进行值传递，否则就会造成值传递是无休止的递归调用
//	Person(Person& b)
//	{
//		age = b.age;
//	}
//
////写赋值运算符重载时：
//	Person& operator=(const Person& p)
//	{
//		//判断是否赋值的是自身
//		if (this == &p)
//		{
//			return *this;
//		}
//		//判断本身是否开辟的内存，注意释放
//		delete[] this->age;
//		this->age = NULL;
//		//重新开辟一个赋值对象大小的内存
//
//		this->age = new char(strlen(p)+1);
//		strcpy(this->age, p.age);
//
//		return *this;
//	}
//};


//singleton

class singleton1
{
private:
	singleton1()
	{

	}
	static singleton1 m_data;

};
