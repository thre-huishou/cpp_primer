#define _CRT_SECURE_NO_WARNINGS 1
#include"string1.h"


//一组重载的构造函数
inline string1::string1()//默认构造
{

}
inline string1::string1(const char * ptr)//传参构造
{
	assert(ptr != NULL);
	m_size = strlen(ptr);
	this->m_string = new char[m_size+1];
	strcpy(m_string, ptr);
}
inline string1::string1(const string1& s)//拷贝构造
{
	m_size = s.m_size;
	m_string = new char[m_size+1];
	strcpy(m_string, s.m_string);
}

//一组重载的赋值操作符
string1& string1::operator=(const char* ptr)
{
	//自己编写的
	//assert(ptr != NULL);
	//if (m_string != NULL)
	//{
	//	delete[] m_string;
	//	m_string = NULL;
	//}
	//m_size = strlen(ptr);
	//m_string = new char[m_size + 1];
	//strcpy(m_string, ptr);
	//return *this;
	//更改
	assert(ptr != this->m_string);
	if (m_size < strlen(ptr))//判断是否，速度可能快，但是一定程度的浪费内存
	{
		delete[] m_string;
		m_string = new char[strlen(ptr) + 1];
	}
	m_size = strlen(ptr);
	strcpy(m_string, ptr);
	return *this;
}
string1& string1::operator=(const string1& str)
{
	assert(str.m_string != NULL);
	if (m_size < str.m_size)
	{
		delete[] m_string;
		m_string = new char[str.m_size+1];
	}
	m_size = str.m_size;
	strcpy(m_string, str.m_string);
	return *this;
}

//一组重载的等于操作符
inline bool 
string1::operator==(const char* ptr)
{
	//自己写
	//assert(ptr != NULL);
	//bool ret = false;
	//if (m_size != strlen(ptr))
	//{
	//	for (int i = 0; i < strlen(ptr); i++)
	//	{
	//		if (m_string[i] != ptr[i])
	//		{
	//			break;
	//		}
	//	}
	//	ret = true;
	//}
	//return ret;
	//别人写，直接使用strcmp
	return strcmp(m_string, ptr) == 0 ? true:false;
}
bool string1::operator==(const string1& str)
{
	return strcmp(m_string, str.m_string) == 0 ? true : false;
}

//重载的下标操作符
char& string1::operator[](unsigned int num)
{
	assert(num >= 0 && num < m_size);
	return this->m_string[num];
}

//成员访问函数
unsigned int string1::size()
{
	return m_size;
}
char* string1::c_str()
{
	return m_string;
}

ostream& operator<<(ostream& cout, string1& str)
{
	//自己写
	//assert(str.size() != 0);
	//for (int i = 0; i < str.size(); i++)
	//{
	//	cout << str[i];
	//}
	//return cout;
	//别人写
	if (str.size() != 0)
	{
		cout << str.c_str();
	}
	return cout;
}

istream& operator>>(istream& cin, string1& str)
{
	//这么写，只能一次性输入str原先就存在的位数
	//assert(str.size() != 0);
	//for (int i = 0; i < str.size(); i++)
	//{
	//	cin >> str[i];
	//}
	//return cin;
	char tmp[100];
	if (cin >> tmp)
	{
		delete[] str.m_string;
		str.m_size = strlen(tmp);
		str.m_string = new char[str.m_size + 1];
		strcpy(str.m_string, tmp);
	}
	return cin;
}