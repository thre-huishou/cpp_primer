#define _CRT_SECURE_NO_WARNINGS 1
#include"string1.h"


//һ�����صĹ��캯��
inline string1::string1()//Ĭ�Ϲ���
{

}
inline string1::string1(const char * ptr)//���ι���
{
	assert(ptr != NULL);
	m_size = strlen(ptr);
	this->m_string = new char[m_size+1];
	strcpy(m_string, ptr);
}
inline string1::string1(const string1& s)//��������
{
	m_size = s.m_size;
	m_string = new char[m_size+1];
	strcpy(m_string, s.m_string);
}

//һ�����صĸ�ֵ������
string1& string1::operator=(const char* ptr)
{
	//�Լ���д��
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
	//����
	assert(ptr != this->m_string);
	if (m_size < strlen(ptr))//�ж��Ƿ��ٶȿ��ܿ죬����һ���̶ȵ��˷��ڴ�
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

//һ�����صĵ��ڲ�����
inline bool 
string1::operator==(const char* ptr)
{
	//�Լ�д
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
	//����д��ֱ��ʹ��strcmp
	return strcmp(m_string, ptr) == 0 ? true:false;
}
bool string1::operator==(const string1& str)
{
	return strcmp(m_string, str.m_string) == 0 ? true : false;
}

//���ص��±������
char& string1::operator[](unsigned int num)
{
	assert(num >= 0 && num < m_size);
	return this->m_string[num];
}

//��Ա���ʺ���
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
	//�Լ�д
	//assert(str.size() != 0);
	//for (int i = 0; i < str.size(); i++)
	//{
	//	cout << str[i];
	//}
	//return cout;
	//����д
	if (str.size() != 0)
	{
		cout << str.c_str();
	}
	return cout;
}

istream& operator>>(istream& cin, string1& str)
{
	//��ôд��ֻ��һ��������strԭ�Ⱦʹ��ڵ�λ��
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