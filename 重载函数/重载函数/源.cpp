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
	//����������׼ת��ƥ�䣬������
	/*fun(3.14);*/
	//�����f��������ʾ����ת������
	//fun(3.14f);
	//fun((float)3.14);
	//fun(static_cast<int>(3.14));

	char num = 1;
	//����ֵ���ݣ�������ֵ����ֵ��ת�����ڽ���char-int������ת��
	//��ֵ����ֵ��ת�����ٽ���char-float�����α�׼ת����
	fun(num);
	return 0;
}