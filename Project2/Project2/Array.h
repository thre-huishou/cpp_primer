#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<cassert>
using namespace std;

//����һ��������
class Array
{
public:

	Array();
	Array(int size);


	//����֮��ıȽ�
	bool operator==(const Array& arr) const;//��const��ʾ�˺��������޸���ĳ�Ա����
	bool operator!=(const Array& arr) const;

	//�Ⱥ�������ع���ʵ������֮��ĸ�ֵ
	Array& operator=(const Array & arr);

	//���С
	int size() const;

	//���������е���Сֵ
	int find_min() const;

	//���������е����ֵ
	int find_max() const;
	//����ĳ���ض���ֵ������ڣ������±����������ڷ���-1
	int find_sp(int num) const;

	//���������
	void m_sort();

	//ָ�����ȳ�ʼ��

	//һ��ֵ���г�ʼ��

	//ͨ�����������������еĵ���Ԫ��
	int& operator[](int num);
	//�ܹ��ػ�ָ�����������

private:
	//����
	int* arr;
	//�����С
	int m_size;

};