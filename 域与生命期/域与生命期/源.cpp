#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//#include<memory>
//#include<string>
//namespace qq
//{
//	int cin = 10;
//	class person
//	{
//	public:
//		person(int a, std::string b)
//		{
//			age = a;
//			name = b;
//		}
//		int age;
//		std::string name;
//	};
//}
//
//int main()
//{
//	std::cout << "10" << std::endl;
//	std::cout << qq::cin << std::endl;
//	qq::person p1(10, "张三");
//	std::cout << p1.age << p1.name << std::endl;
//	int i = 10;
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << i << " ";
//	}
//	return 0;
//}

//int main()
//{
//	auto_ptr<int> pi(new int(1024));
//	cout << *pi << endl;
//	auto_ptr<int> pp(pi);
//	cout << *pp << endl;
//	//pi不能对分配的内存进行访问
//	cout << *pi << endl;
//	return 0;
//}

#include"dqq.h"

using namespace dqq;

int main()
{
	person p(18, "张三");
	p.speak();
	print();
	cout << num << endl;
	return 0;
}