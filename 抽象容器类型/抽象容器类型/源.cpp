#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<fstream>

//int main()
//{
//	//vector<int> ivec;
//	//cout << ivec.size() << " " << ivec.capacity() << endl;
//	//for (int i = 0; i < 24; i++)
//	//{
//	//	ivec.push_back(i);
//	//	cout << ivec.size() << " " << ivec.capacity() << endl;
//	//}
//
//	//vector<string> v1;
//	//string tmp;
//	//while (cin >> tmp)
//	//{
//	//	v1.push_back(tmp);
//	//	cout << v1.size() << endl; 
//	//}
//
//	ifstream ifs;
//	vector<string> v1;
//	ifs.open("111.txt", ios::in);
//	string name;
//	while (ifs >> name)
//	{
//		cout << name << endl;
//		v1.push_back(name);
//	}
//	ifs.close();
//	
//	return 0;
//}

//函数

//指针
//void mymax(int* a)
//{
//	cout << sizeof(*a) << endl;
//}
////引用
//void mymax(int(&a)[7])
//{
//	cout << sizeof(a) << endl;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7 };
//	mymax(a);
//	return 0;
//}

extern "C" int printf(const char *...);

int main()
{
	printf("1111");
	return 0;
}