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
//	//�������캯�����ܽ���ֵ���ݣ�����ͻ����ֵ����������ֹ�ĵݹ����
//	Person(Person& b)
//	{
//		age = b.age;
//	}
//
////д��ֵ���������ʱ��
//	Person& operator=(const Person& p)
//	{
//		//�ж��Ƿ�ֵ��������
//		if (this == &p)
//		{
//			return *this;
//		}
//		//�жϱ����Ƿ񿪱ٵ��ڴ棬ע���ͷ�
//		delete[] this->age;
//		this->age = NULL;
//		//���¿���һ����ֵ�����С���ڴ�
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
