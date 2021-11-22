#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<cassert>
using namespace std;

//建立一个数组类
class Array
{
public:

	Array();
	Array(int size);


	//数组之间的比较
	bool operator==(const Array& arr) const;//加const表示此函数不能修改类的成员变量
	bool operator!=(const Array& arr) const;

	//等号运算符重构，实现数组之间的赋值
	Array& operator=(const Array & arr);

	//求大小
	int size() const;

	//查找数组中的最小值
	int find_min() const;

	//查找数组中的最大值
	int find_max() const;
	//查找某个特定的值，如果在，返回下标索引，不在返回-1
	int find_sp(int num) const;

	//数组的排序
	void m_sort();

	//指定长度初始化

	//一组值进行初始化

	//通过索引来访问数组中的单个元素
	int& operator[](int num);
	//能够截获并指出错误的索引

private:
	//数组
	int* arr;
	//数组大小
	int m_size;

};