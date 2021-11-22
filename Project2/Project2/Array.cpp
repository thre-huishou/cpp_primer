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

////����֮��ıȽ�
//bool Array::operator==(const Array& arr) const//��const��ʾ�˺��������޸���ĳ�Ա����
//{
//
//}
//bool Array::operator!=(const Array& arr) const
//{
//
//}
//
////�Ⱥ�������ع���ʵ������֮��ĸ�ֵ
//Array& Array::operator=(const Array & arr)
//{
//
//}

//���С
int Array::size() const
{
	return this->m_size;
}

////���������е���Сֵ
//int Array::find_min() const
//{
//
//}
//
////���������е����ֵ
//int Array::find_max() const
//{
//
//}
////����ĳ���ض���ֵ������ڣ������±����������ڷ���-1
//int Array::find_sp(int num) const
//{
//
//}
//
////���������
//void Array::m_sort()
//{
//
//}

//ָ�����ȳ�ʼ��

//һ��ֵ���г�ʼ��

//ͨ�����������������еĵ���Ԫ��

//�ܹ��ػ�ָ�����������
