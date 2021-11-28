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

	//插入
	void insert(linknode* target, int num);
	void insert_front(int num);
	void insert_end(int num);
	//删除
	void remove(linknode* target);
	void remove_front();
	void remove_end();
	//查找
	linknode* find(int num);
	//求长度
	int size();
	//显示
	void display();
	//比较两个链表
	bool compare(ilist &l);
	//翻转链表
	void reverse();
	//连接链表
	void link(ilist &l);

private:
	int m_size;
	linknode* m_start;
	linknode* m_end;
};