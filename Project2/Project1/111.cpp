#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//extern double power(int, int);
//extern string name;
//int main()
//{
//	float Float = 10;
//	string name = "11111";
//	cout << power(2, -1) << endl;
//	int b;
//	int a = b = 10;
//	return 0;
//}

//
//class Person
//{
//private:
//	int age;
//public:
//	Person(int a)
//	{
//		age = a;
//	}
//	//�������캯�����ܽ���ֵ���ݣ�����ͻ����ֵ����������ֹ�ĵݹ����
//	Person(Person& b)
//	{
//		age = b.age;
//	}
//
////д��ֵ���������ʱ��
//	Person& operator=(const Person& p)
//	{
//		//�ж��Ƿ�ֵ��������
//		if (this == &p)
//		{
//			return *this;
//		}
//		//�жϱ����Ƿ񿪱ٵ��ڴ棬ע���ͷ�
//		delete[] this->age;
//		this->age = NULL;
//		//���¿���һ����ֵ�����С���ڴ�
//
//		this->age = new char(strlen(p)+1);
//		strcpy(this->age, p.age);
//
//		return *this;
//	}
//};


////singleton
//
//class singleton1
//{
//private:
//	singleton1()
//	{
//
//	}
//	static singleton1 m_data;
//
//};
//
//#include<string>
//#include<algorithm>
//int main()
//{
	//[c�����ַ�������
	////���������к�spָ���ַ����������λ�ã�����Ұָ�������
	//const char* ps = "the expense of spirit\n";
	//int len = 0;
	//while (*ps++) len++;
	//cout << len << endl;
	////�������
	//ps = ps - len-1;
	//cout << *ps << endl;
	////���õķ������ǿ���һ����ʱ���ڼ����ָ��
	//const char * t = ps;
	//len = 0;
	//while (*t++)len++;
	//cout << len << endl;
	//cout << *ps << endl;
	//return 0;

//	//c++��װ���ַ�����
//	string s1 = "hello world";
//	string s2(s1);//��ʾ��ֵ��ʼ��
//	cout << "s1�ĳ���:" << s1.size() << endl;
//	cout << "s2�ĳ���:" << s2.size() << endl;
//	cout << &s2 << endl;
//	cout << &s1 << endl;
//	string s3;
//	cout << "s3�ĳ���:" << s3.size() << endl;
//	cout << (s3.empty()==1?"��":"��Ϊ��") << endl;
//
//	s3 = s2;//���Ƚ�s3��������ַ��洢���ͷŵ���Ȼ���ڷ����㹻�洢��S2��������ַ��Ĵ洢����
//	//���s2���ַ��������洢��
//	
//	//�ַ���ƴ��
//	const char* p = "!";
//	//���ַ����ܹ�ʵ������Ϊc++�ܹ��Զ���c�����ַ���ת��Ϊstring���󡣵��Ƿ���stringת��Ϊc���ı���
//	s3 = s3+p+s2;
//	//p = s3;//����
//	p = s3.c_str();//��ʾ�ĵ���c_str�����������䷵�ص���һ��ָ���������ָ�룬��ָ������ݲ��ɱ䡣
//	//�����һ����const*ȥ�����򱨴�
//	//char *t= s3.c_str(); 
//	cout << *p << endl;
//	cout << s3 << endl;
//
//	for (int i = 0; i < s3.size(); i++)
//	{
//		if (s3[i] == '!')
//		{
//			s3[i] = '_';
//		}
//	}
//	for (int i = 0; i < s3.size(); i++)
//	{
//		cout << s3[i];
//	}
//	cout << endl;
//	replace(s3.begin(), s3.end(), '_', '!');
//	for (int i = 0; i < s3.size(); i++)
//	{
//		cout << s3[i];
//	}
//
//}

//��������
//int main()
//{
//	double val = 3.1415;
//	const int &ir = 1024;
//	const int &ir2 = val;
//	const double &dr = val + 1.0;
//	cout << val << " " << ir << " " << ir2 << " " << dr << endl;
//
//	//���ø�ֵ�Ƕ����õ�ֵ���иı䣬����������õ�Ŀ����иı䡣
//	int a = 10, b = 20;
//	int &v1 = a, &v2 = b;
//	cout << v1 << " " << v2 << endl;
//	v1 = v2;
//	cout << v1 << " " << v2 << endl;
//	a = 30;
//	cout << v1 << " " << v2 << endl;
//	return 0;
//}

//bool����
//int main()
//{
//	enum data
//	{
//		mon,
//		thr,
//		wed,
//		thur,
//		fri,
//		sat,
//		sun
//	};
//	data aa = wed;
//	cout <<data::sun << endl;
//	cout << aa << endl;
//	//����ʵ��aa++
//	return 0;
//}

//
////��������
//int main()
//{
//
//	return 0;
//}

//vector
//#include<vector>
//
//
//vector<int> v2(10);
//int main()
//{
//	int a[7] = { 1,2,3,4,5,6,7 };
//	vector<int> v3(a, a + 7);
//	vector<int> v1 = {1,2,3,4,5,6,7,8,9,0};
//	//for (int i = 0; i < v1.size(); i++)
//	//{
//	//	v1[i] = i;
//	//}
//	for (int i = 0; i < v3.size(); i++)
//	{
//		cout<<v3[i];
//	}
//	cout << endl;
//	return 0;
//}