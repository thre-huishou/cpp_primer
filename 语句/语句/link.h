#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
#include<cassert>
using namespace std;

class linknode
{
public:
	linknode(int num);
	int m_value;
	linknode * m_next;
};

class ilist
{
public:
	ilist() :m_size(0), m_end(NULL), m_start(NULL)
	{
	}

	//����
	void insert(linknode* target, int num);
	void insert_front(int num);
	void insert_end(int num);
	//ɾ��
	void remove(linknode* target);
	void remove_front();
	void remove_end();
	//����
	linknode* find(int num);
	//�󳤶�
	int size();
	//��ʾ
	void display();
	//�Ƚ���������
	bool compare(ilist &l);
	//��ת����
	void reverse();
	//��������
	void link(ilist &l);

private:
	int m_size;
	linknode* m_start;
	linknode* m_end;
};