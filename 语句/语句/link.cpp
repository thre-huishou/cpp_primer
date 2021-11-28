#define _CRT_SECURE_NO_WARNINGS 1
#include"link.h"

linknode::linknode(int num)
{
	m_value = num;
	m_next = NULL;
}

//插入
void ilist::insert(linknode* target, int num)
{
	assert(target != NULL);
	linknode* tmp = m_start;
	while (tmp != target)
	{
		tmp = tmp->m_next;
	}
	linknode* newnode = new linknode(num);
	if (newnode == NULL)
	{
		cout << "创建失败" << endl;
		return;
	}
	newnode->m_next = tmp->m_next;
	tmp->m_next = newnode;
	m_size++;
}
void ilist::insert_front(int num)
{
	linknode* tmp = new linknode(num);
	if (this->m_end == NULL)
	{
		m_end = tmp;
		m_start = tmp;
	}
	else
	{
		tmp->m_next = m_start;
		m_start = tmp;
	}
	m_size++;
}
void ilist::insert_end(int num)
{
	linknode* tmp = new linknode(num);
	if (this == NULL)
	{
		m_start = tmp;
		m_end = tmp;
	}
	else
	{
		m_end->m_next = tmp;
		m_end=tmp;
	}
	m_size++;
}
//删除
void ilist::remove(linknode* target)
{
	linknode* tmp = m_start;
	linknode* pre=NULL;
	if (tmp != target)
	{
		pre = tmp;
		tmp = tmp->m_next;
	}
	pre->m_next = tmp->m_next;
	m_size--;
	delete tmp;
}
void ilist::remove_front()
{
	assert(m_start != NULL);
	linknode* tmp = m_start;
	m_start = m_start->m_next;
	m_size--;
	delete tmp;
}
void ilist::remove_end()
{
	assert(m_end != NULL);
	linknode* tmp = m_start;
	linknode* pre=NULL;
	while (tmp != m_end)
	{
		pre = tmp;
		tmp = tmp->m_next;
	}
	m_end = pre;
	m_size--;
	delete tmp;
}
//查找
linknode* ilist::find(int num)
{
	linknode* tmp=m_start;
	while (tmp!=m_end)
	{
		if (tmp->m_value != num)
			tmp = tmp->m_next;
		else
			return tmp;
	}
	if (m_end->m_value == num)
	{
		return m_end;
	}
	cout << "未找到" << endl;
}
//求长度
int ilist::size()
{
	if (m_end != NULL && m_start != NULL)
	{
		return m_size;
	}
}
//显示
void ilist::display()
{
	linknode* tmp = m_start;
	while (tmp != m_end)
	{
		cout << tmp->m_value << "->";
		tmp = tmp->m_next;
	}
	cout << tmp->m_value << endl;
}
//比较两个链表
bool ilist::compare(ilist &l)
{
	bool ret = false;
	if (m_size != l.m_size)
	{
		return ret;
	}
	linknode* tmp1 = m_start;
	linknode* tmp2 = l.m_start;
	while (tmp1->m_value == tmp2->m_value)
	{
		if (tmp1 != NULL && tmp2 != NULL)
		{
			ret = true;
			tmp1 = tmp1->m_next;
			tmp2 = tmp2->m_next;
		}
		else
		{
			return ret;
		}
	}

	ret = false;
	return ret;
}
//翻转链表
void ilist::reverse()
{

}
//连接链表
void ilist::link(ilist &l)
{

}