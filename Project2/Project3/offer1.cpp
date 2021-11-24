#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cassert>
using namespace std;

//bool myfind(int * matrix, int rows, int coloums, int num)
//{
//	bool find_num = false;
//	int row = 0;
//	int coloum = coloums - 1;
//	assert(matrix != NULL && rows > 0 && coloums > 0);
//	while (row < rows&&coloum >= 0)
//	{
//		if (*(matrix + (coloums*row) + coloum) == num)
//		{
//			find_num = true;
//			return find_num;
//		}
//		else if (*(matrix + (coloums*row) + coloum) < num)
//		{
//			row++;
//		}
//		else
//		{
//			coloum--;
//		}
//	}
//	return find_num;
//}
//
//int main()
//{
//	int matrix[][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20} };
//	int coloum = sizeof(matrix[0]) / sizeof(matrix[0][0]);
//	int row = sizeof(matrix) / sizeof(matrix[0]);
//	/*cout << coloum << " " << row << endl;*/
//	int num = 13;
//	cin >> num;
//	bool ret=myfind(matrix[0], row, coloum, num);
//	if (ret)
//	{
//		cout << "找到！" << endl;
//	}
//	else
//	{
//		cout << "未找到!" << endl;
//	}
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello world";
//	char str2[] = "hello world";
//	const char *str3 = "hello world";
//	const char *str4 = "hello world";
//	if (str1 == str2)
//	{
//		cout << "str1 is the same as str2" << endl;
//	}
//	else
//	{
//		cout << "str1 is not the same as str2" << endl;
//	}
//	if (str3 == str4)
//	{
//		cout << "str3 is the same as str4" << endl;
//	}
//	else
//	{
//		cout << "str3 is not the same as str4" << endl;
//	}
//	return 0;
//
//}

//实现一个函数，把字符串中的每个空格替换成“%20”，例如“we are happy"->"we%20are%20happy"

#include<string>
//O(n)
//string myswap(string& ptr)
//{
//	int len = ptr.size();
//	int num = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (ptr[i] == ' ')
//		{
//			num++;
//		}
//	}
//	//cout << num << endl;
//	char* p1 = &ptr[len - 1];
//	int len1 = len + num * 2;
//	string str2;
//	str2.resize(len1);
//	char* p2 = &str2[len1 - 1];
//	for (int i = 0; i < len; i++)
//	{
//		if (*p1 == ' ')
//		{
//			*p2 = '0';
//			p2--;
//			*p2 = '2';
//			p2--;
//			*p2 = '%';
//		}
//		else
//		{
//			*p2 = *p1;
//		}
//		p2--;
//		p1--;
//	}
//	return str2;
//}
//
//
//int main()
//{
//	string str1 = "we are happy";
//	cout<<myswap(str1)<<endl;
//	return 0;
//}


//有两个排序的数组A1和A2，内存在A1的末尾有足够多的空余空间容纳A2，实现一个函数，把A2中的所有数插入到A1中并且所有的数字是排序的
