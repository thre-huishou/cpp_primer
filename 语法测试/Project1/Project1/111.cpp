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
//	////const �޶�������������ʼ����constָ��
//	////int * ptr = &num;
//	////����const�޶������εı����ܹ�������ʼ��const���ε�ָ��
//	///*int * const ptr = &num;*/
//
//	////��const���ε����ò���ָ��һ��const���εı���
//	////int &aa = num;
//	////const���ε������ܹ�ָ��һ��const���εı���
//	//const int &bb = num;
//
//	//const int &cc = num2;//����
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
//	//bitset����
//	//������Ϊ00000000 00000000 00000000 00001111
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
//	swap(const_cast<char *>(ptr));//����ָ�벻������ָͨ����գ���Ҫǿ������ת��
//
//	return 0;
//}

class person
{
public: 
	person()
	{
		cout << "���캯��" << endl;
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