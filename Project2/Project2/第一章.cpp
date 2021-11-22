#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//void readIn()
//{
//	cout << "readIn()" << endl;
//}
//void sort()
//{
//	cout << "sort()" << endl;
//}
//void compact()
//{
//	cout << "compact()" << endl;
//	cout << __LINE__ << endl;
//}
//void print()
//{
//	cout << "print()" << endl;
//}
//int main()
//{
//	readIn();
//	sort();
//#ifdef __cplusplus
//    compact();
//#endif
//#ifdef __STDC
//	print();
//#endif
///*
//	cout << __LINE__ << endl;*/
//	cout << __FILE__ << endl;
//	cout << __DATE__ << endl;
//	cout << __TIME__ << endl;
//	return 0;
//}

#include"Array.h"


int main()
{
	/*int *print = 0;*/
	Array a1(3);
	for (int i = 0; i < a1.size(); i++)
	{
		cout << a1[i] << endl;
	}

	return 0;
}