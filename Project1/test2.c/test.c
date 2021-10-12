#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
//int my_strncmp(const char* p1, const char * p2,int num)
//{
//	assert(*p1&&*p2&&num);
//	while(num)
//	{ 
//		if (*p1 < *p2)
//		{
//			return -1;
//		}
//		else if (*p1 < *p2)
//		{
//			return 1;
//		}
//		else
//		{
//			p1++;
//			p2++;
//			num--;
//		}
//
//	}
//	return 0;
//}
//
//int main()
//{
//	const char *p1 = "abcdef";
//	const char* p2 = "abdsg";
//	int num = 2;
//	//int ret = strcmp(p1, p2);
//	//int ret = strncmp(p1, p2, num);
//	int ret = my_strncmp(p1, p2, num);
//	printf("%d\n", ret);
//	return 0;
//}
//char* my_strstr(const char * p1, const char* p2)
//{
//	assert((p1!=NULL)&&(p2!=NULL)); 
//	int len1 = strlen(p1);
//	int len2 = strlen(p2);
//	int i = 0;
//	for (i = 0; i < len1; i++)
//	{
//		again:
//		if (*(p1+i) != *(p2))
//		{
//			continue;
//		}
//		else
//		{
//			int j = 0;
//			for (j = 0; j < len2; j++)
//			{
//				if (*(p1 + i + j) == *(p2+ j))
//				{
//					continue;
//				}
//				else
//				{
//					i++;
//					goto again;
//				}
//			}
//			return p1 + i;
//		}
//
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* p1 = "abcdefgh";
//	char* p2 = "djd";
//	/*int ret=strstr(p1, p2)-p1;*/
//	char* ret=my_strstr(p1, p2);
//	printf("%s\n", ret);
//	return 0;
//}

//strtok函数
//int main()
//{
//	//192.168.31.121
//	//192 168 31 121
//	//利用某些标记将字符串拆分，并且提取出某些段
//
//	char arr[] = "aa123@qq.com";
//	char *p = "@.";
//	char buff[1024] = { 0 };
//	strcpy(buff,arr); 
//	//切割buff中的字符串
//	//char *ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	//错误码、错误信息
//	//0.......No error
//	//1.......Operation not permitted
//	//2.......No such file or directory
//	//....
//	//No error
//	//char* str = strerror(0);
//	//printf("%s\n", str);
//
//	//Operation not permitted
//	//char* str = strerror(1);
//	//printf("%s\n", str);
//
//	//errno是一个全局的错误变量
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("打开成功了");
//	}
//	return 0;
//}