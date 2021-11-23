#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

string name;

double power(int num, int k)
{

	double ret = 1;
	if (k < 0)
	{
		k = -k;
		for (; k > 0;k--)
		{
			ret *= num;
		}
		ret = 1 / ret;
		return ret;
	}
	else if (k > 0)
	{
		for (; k > 0; k--)
		{
			ret *= num;
		}
		return ret;
	}
	else
	{
		return 1;
	}
}