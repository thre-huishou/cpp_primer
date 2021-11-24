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
//	//拷贝构造函数不能进行值传递，否则就会造成值传递是无休止的递归调用
//	Person(Person& b)
//	{
//		age = b.age;
//	}
//
////写赋值运算符重载时：
//	Person& operator=(const Person& p)
//	{
//		//判断是否赋值的是自身
//		if (this == &p)
//		{
//			return *this;
//		}
//		//判断本身是否开辟的内存，注意释放
//		delete[] this->age;
//		this->age = NULL;
//		//重新开辟一个赋值对象大小的内存
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
	//[c风格的字符串类型
	////该例子运行后，sp指向字符串结束后的位置，存在野指针的问题
	//const char* ps = "the expense of spirit\n";
	//int len = 0;
	//while (*ps++) len++;
	//cout << len << endl;
	////解决方法
	//ps = ps - len-1;
	//cout << *ps << endl;
	////更好的方法就是拷贝一个临时用于计算的指针
	//const char * t = ps;
	//len = 0;
	//while (*t++)len++;
	//cout << len << endl;
	//cout << *ps << endl;
	//return 0;

//	//c++封装的字符串类
//	string s1 = "hello world";
//	string s2(s1);//显示赋值初始化
//	cout << "s1的长度:" << s1.size() << endl;
//	cout << "s2的长度:" << s2.size() << endl;
//	cout << &s2 << endl;
//	cout << &s1 << endl;
//	string s3;
//	cout << "s3的长度:" << s3.size() << endl;
//	cout << (s3.empty()==1?"空":"不为空") << endl;
//
//	s3 = s2;//首先将s3相关联的字符存储区释放掉，然后在分配足够存储与S2相关联的字符的存储区，
//	//最后将s2的字符拷贝到存储区
//	
//	//字符串拼接
//	const char* p = "!";
//	//这种方法能够实现是因为c++能够自动将c风格的字符串转换为string对象。但是反向将string转换为c风格的报错
//	s3 = s3+p+s2;
//	//p = s3;//报错
//	p = s3.c_str();//显示的调用c_str（）。但是其返回的是一个指向常量数组的指针，即指向的内容不可变。
//	//如果用一个非const*去接收则报错
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

//引用类型
//int main()
//{
//	double val = 3.1415;
//	const int &ir = 1024;
//	const int &ir2 = val;
//	const double &dr = val + 1.0;
//	cout << val << " " << ir << " " << ir2 << " " << dr << endl;
//
//	//引用赋值是对引用的值进行改变，而不会对引用的目标进行改变。
//	int a = 10, b = 20;
//	int &v1 = a, &v2 = b;
//	cout << v1 << " " << v2 << endl;
//	v1 = v2;
//	cout << v1 << " " << v2 << endl;
//	a = 30;
//	cout << v1 << " " << v2 << endl;
//	return 0;
//}

//bool类型
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
//	//不能实现aa++
//	return 0;
//}

//
////数组类型
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