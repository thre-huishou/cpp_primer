#define _CRT_SECURE_NO_WARNINGS 1
#include<complex>
#include<string>
#include<algorithm>
#include<iostream>
#include<vector>
#include"mystack.h"
using namespace std;

//int main()
//{
//	//char b = 259;
//	//cout << b << endl;//�ַ���0��ʾnull����ʲôҲ�����
//	//cout << static_cast<int>(b) << endl;//��ʾ����ת��
//
//	////������֧���������Լ�������
//	//complex<int> c1(1, 1);
//	//cout << c1 << endl;
//	//++c1;
//	//cout << c1 << endl;
//	//size_t a = sizeof(int);
//	//cout << a << endl;
//
//	//int b[4];
//	//int* c = b;
//	//cout << sizeof(b) << endl;
//	//cout << sizeof(c) << endl;
//
//	//int* p = new int[4];
//	//cout << sizeof(p) << endl;
//	////������Ƕ�̬�����ٵ�int��С
//	//cout << sizeof(*p) << endl;
//
//	//int* & aa = p;
//	//cout << sizeof(aa) << endl;
//
//	////string
//	//string str1 = "hello world";
//	//cout << sizeof(str1) << endl;
//
//	vector<string> v1(10);
//	cout << v1[0] << endl;
//
//
//
//	return 0;
//
//
//}

//void test(void* p)
//{
//	*static_cast<int*>(p)=20;
//	
//}
//
//int main()
//{
//	int a = 10;
//	test(&a);
//	cout << a << endl;
//	return 0;
//}

//ʵ��ջ
int main()
{
	mystack m1;
	cout << m1.mysize() << endl;
	cout<<m1.myempty()<<endl;
	cout << m1.myfull() << endl;
	m1.mypush(1);
	m1.mypush(2);
	m1.mypush(3);
	m1.mypush(4);
	m1.mypush(5);
	cout << m1.mysize() << endl;
	cout << m1.myempty() << endl;
	cout << m1.myfull() << endl;
	m1.display();
	m1.mypop();
	m1.display();
	m1.mypop();
	m1.display();
	return 0;
}