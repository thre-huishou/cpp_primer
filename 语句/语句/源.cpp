#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	int a = 0;
//	cin >> a;
//	switch (a)
//	{
//		//case��default�����������У�����������䡣���Ƿ���һ��������
//	case 1:
//	{
//		int b = 10;
//		break;
//	}
//	case 2:
//		cout << a << endl;
//	}
//	return 0;
//}

//forѭ�����
//int main()
//{
//	//for (int i = 0,j = 0; i < 10, j < 10; i++, j++)
//	//{
//	//	cout << i << " " << j << endl;
//	//}
//	int ia = 10;
//	int size = 9;
//	for (int* ptr = &ia, ix = 0; ix < size&&ptr != ia + size; ++ix, ++ptr)
//	{
//
//	}
//	return 0;
//}

////while���
//int main()
//{
//
//	return 0;
//}

//����ʾ��
#include"link.h"
int main()
{
	ilist l;
	l.insert_front(1);
	l.insert_front(2);
	l.insert_front(3);
	l.display();
	cout << l.size() << endl;
	l.insert_end(3);
	l.insert_end(2);
	l.insert_end(1);
	l.display();
	cout << l.size() << endl;
	l.remove_end();
	l.remove_front();
	l.display();
	cout << l.size() << endl;
	l.insert(l.find(3), 2);
	l.display();
	return 0;

}