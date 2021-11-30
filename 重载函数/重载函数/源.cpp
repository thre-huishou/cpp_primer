#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


void fun(int num)
{
	cout << num << endl;
	cout << "int" << endl;
}
void fun(float num)
{
	cout << num << endl;
	cout << "float" << endl;
}

int main()
{
	//存在两个标准转换匹配，二义性
	/*fun(3.14);*/
	//后面加f，或者显示类型转换可以
	//fun(3.14f);
	//fun((float)3.14);
	//fun(static_cast<int>(3.14));

	char num = 1;
	//首先值传递，进行左值到右值的转换，在进行char-int的提升转换
	//左值到右值的转换，再进行char-float的整形标准转换，
	fun(num);
	return 0;
}