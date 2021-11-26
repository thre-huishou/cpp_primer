#define _CRT_SECURE_NO_WARNINGS 1
#include"mystack.h"


mystack::mystack()
{
	m_top = 0;
	m_stack.resize(10);
}
mystack::mystack(const int * p)
{

}
mystack::mystack(const mystack& s)
{

}
mystack::~mystack()
{

}

void mystack::mypush(int num)
{
	if (!myfull())
	{
		m_stack[m_top] = num;
		m_top++;
	}
	else
	{
		cout << "ÂúÁË" << endl;
		return;
	}
}
void mystack::mypop()
{
	if (myempty())
	{
		cout<<"¿ÕµÄ";
		return;
	}
	else
	{
		m_stack[m_top]=0;
		m_top--;
	}
}
int mystack::mysize()
{
	return m_top;
}
bool mystack::myfull()
{
	if (m_top == m_stack.size()-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool mystack::myempty()
{
	if (m_top == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void mystack::display()
{
	for (int i = 0; i < m_top; i++)
	{
		cout << m_stack[i];
	}
	cout << endl;
}
