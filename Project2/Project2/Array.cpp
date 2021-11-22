#define _CRT_SECURE_NO_WARNINGS 1
#include"Array.h"


Array::Array(int size)
{
	this->m_size = size;
	this->arr = new int[this->m_size];
	for (int i = 0; i < this->m_size; i++)
	{
		arr[i] = 0; 
	}
}

Array::Array()
{
	if (this->arr != NULL)
	{
		delete[] arr;
		arr = NULL;
	}
}

int& Array::operator[](int num)
{
	assert(num >= 0 && num < this->m_size);
	return arr[num];
}

////数组之间的比较
//bool Array::operator==(const Array& arr) const//加const表示此函数不能修改类的成员变量
//{
//
//}
//bool Array::operator!=(const Array& arr) const
//{
//
//}
//
////等号运算符重构，实现数组之间的赋值
//Array& Array::operator=(const Array & arr)
//{
//
//}

//求大小
int Array::size() const
{
	return this->m_size;
}

////查找数组中的最小值
//int Array::find_min() const
//{
//
//}
//
////查找数组中的最大值
//int Array::find_max() const
//{
//
//}
////查找某个特定的值，如果在，返回下标索引，不在返回-1
//int Array::find_sp(int num) const
//{
//
//}
//
////数组的排序
//void Array::m_sort()
//{
//
//}

//指定长度初始化

//一组值进行初始化

//通过索引来访问数组中的单个元素

//能够截获并指出错误的索引
