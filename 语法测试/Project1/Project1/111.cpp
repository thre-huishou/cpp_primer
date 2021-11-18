#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<complex>
#include<bitset>

//enum piont
//{
//	z,
//	x=2,
//	c,
//	v=3
//};
//
//void swap(char* c)
//{
//
//}
//int main()
//{
//	//const int num = 10;
//	//int num2 = 10;
//	////const 限定符不能用来初始化非const指针
//	////int * ptr = &num;
//	////但是const限定符修饰的变量能够用来初始化const修饰的指针
//	///*int * const ptr = &num;*/
//
//	////非const修饰的引用不能指向一个const修饰的变量
//	////int &aa = num;
//	////const修饰的引用能够指向一个const修饰的变量
//	//const int &bb = num;
//
//	//const int &cc = num2;//可以
//
//	//float b = 10.0;
//
//
//	//int *pp;
//	//
//
//	//double b1 = 10.0, b2 = 3.0;
//	//int a1 = 10, a2 = 3;
//	//cout << b1 / b2 << endl;
//	//cout << a1 / a2 << endl;
//
//	//complex<int> c1(1, 1);
//	//complex<int>c2(c1.real());
//	//cout << c1 <<"  "<<c2<<endl;
//
//	//bitset操作
//	//二进制为00000000 00000000 00000000 00001111
//	//int a = 15;
//	//bitset<32> b = a;
//	//cout << b.test(4) << endl;
//	//cout << b.any() << endl;
//	//cout << b.size() << endl;
//	//for (int i = 0; i < b.size(); i++)
//	//{
//	//	cout << b[i] << " ";
//	//}
//	//cout << endl;
//	//b.flip();
//	//for (int i = 0; i < b.size(); i++)
//	//{
//	//	cout << b[i] << " ";
//	//}
//	//cout << endl;
//	//cout << b.to_string() << endl;
//
//
//	char c = '0';
//	const char *ptr = &c;
//	swap(const_cast<char *>(ptr));//常量指针不能用普通指针接收，需要强制类型转换
//
//	return 0;
//}

class person
{
public: 
	person()
	{
		cout << "构造函数" << endl;
	}
	int age;
};

int sum(int &num)
{
	int ret = 0;
	cout << ret << endl;
	for (int i = 0; i <= num; i++)
	{
		person p;
		ret++;
		cout << ret << endl;
	}
	return ret;
}

int main()
{
	int num = 5;
	cout<<sum(num)<<endl;
	return 0;
}