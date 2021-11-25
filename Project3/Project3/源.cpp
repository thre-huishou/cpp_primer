#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"string1.h"
#include<string>


//pair
//int main()
//{
//	pair<int, string> p1(1, "уехЩ");
//	cout << p1.second << endl;
//	return 0;
//}


int main()
{
	string1 str1;
	string1 str2 = "123456";
	string1 str3 = str2;
	str1 = str2;
	str1 = "2234564";
	cout << str2.size() << endl;
	cout << str3.size() << endl;
	cout << str1.size() << endl;
	cout << (str1 == str2) << endl;
	cout << str2[4] << endl;
	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;
	cin >> str1;
	cout << str1 << endl;
	return 0;
}