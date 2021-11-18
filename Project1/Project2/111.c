#define _CRT_SECURE_NO_WARNINGS 1
//ÄÚ´æº¯Êý

//memcpy
#include<stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	memcpy(arr1, arr2,sizeof(arr1));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", arr2[i]);
	}
	return 0;
}