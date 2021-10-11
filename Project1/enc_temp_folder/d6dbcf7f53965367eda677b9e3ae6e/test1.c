#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//void * my_strcpy(char *arr1, const char* arr2)
//{
//	assert(arr2 != NULL);
//	//char *tmp = arr1;
//	while (*arr2)
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = '\0';
//	//return tmp;
//}
//int main()
//{
//	//char arr[] = "abcdefg";
//	//int len = strlen("abcdefg"); 
//	//printf("%d\n", len);
//
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//返回值是为了实现链式操作
//char* my_strcat(char* arr1, const char* arr2)
//{
//	assert(*arr1 != NULL);
//	assert(*arr2 != NULL);
//	char *tmp = arr1;
//	int len = strlen(arr1);
//	arr1 = arr1 + len;
//	while (*arr1++ = *arr2++)
//	{
//		;
//
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[20] = "abcdefg";
//	char arr2[] = "aaaa";
//	//strcat(arr1,arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* a, const char* b)
//{
//	assert(*a != NULL);
//	assert(*b != NULL);
	//while ((*a++) && (*b++))
	//{
	//	if (*a < *b)
	//	{
	//		return -1;
	//	}
	//	else if (*a == *b)
	//	{
	//		return 0;
	//	}
	//	else
	//	{
	//		return 1;
	//	}
	//}
//	while (*a == *b)
//	{
//		if (*a == '\0')
//		{
//			return 0;
//		}
//		a++;
//		b++;
//	}
//	if (*a > *b)
//	{
//		return 1;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char* a = "abcdef";
//	char* b = "abc";
//	/*int n = strcmp(a, b);*/
//	int n = my_strcmp(a, b);
//	printf("%d", n);
//	return 0;
//}

char* my_strncat(char* arr1, const char* arr2, int n)
{

	char* tmp = arr1;
	int len = strlen(arr1);
	arr1 = arr1 + len;
	while (n && (*arr1 = *arr2))
	{
		n--;
		arr1++;
		arr2++;
	}
	if (*arr2 == '\0')
	{
		while (n)
		{
			*arr1++ = '\0';
			n--;
		}
	}
	return tmp;
}
int main()
{
	char arr1[20] = "abcde";
	char arr2[] = "bbbb";
	int n = 5;
	my_strncat(arr1, arr2,n);
	printf("%s\n", arr1);

	return 0;
}

