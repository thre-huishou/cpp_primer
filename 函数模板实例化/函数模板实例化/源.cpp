#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

////template <class T,int size>
////T* min(T (&arr)[size])
////{
////	for (int i = 0; i < size; i++)
////	{
////		arr[i] = i;
////	}
////	return arr;
////}
////
////int main()
////{
////	int arr[] = { 0,0,0,0,0 };
////	min(arr);
////	for (int i = 0; i < 5; i++)
////	{
////		cout << arr[i] << " ";
////	}
////	return 0;
////}
//
//template<class T>
//T min(T(&arr)[])
//{
//
//}
//void fun(int arr[])
//{
//	//错误，因为函数体内的arr是指针，而不是数组，不能作为函数模板的实参 
//	min(arr);
//}
//
//int main()
//{
//	int arr[3] = { 0,0,0 };
//	fun(arr);
//	return 0;
//}
#include<string>
#include<vector>
#include<algorithm>

//string longestCommonPrefix(vector<string>& strs) {
//	string same = strs[0];
//	for (int i = 0; i < strs.size(); i++)
//	{
//		int len1 = same.size();
//		int len2 = strs[i].size();
//		int j = 0;
//		for (; j < len1&&j < len2; j++)
//		{
//			if (same[j] == strs[i][j])
//			{
//				continue;
//			}
//			else
//			{
//				if (j == 0)
//				{
//					return " ";
//				}
//				break;
//			}
//		}
//		same = strs[i].substr(0, j);
//	}
//	return same;
//}
//
//int main()
//{
//	vector<string> strs = { "flower","flow","flight" };
//	cout << longestCommonPrefix(strs) << endl;
//	return 0;
//}
//#include<stack>
//
//bool isValid(string s) {
//	stack<char> ss;
//	bool ret = false;
//	int len = s.size();
//	if (len % 2 != 0)
//	{
//		return ret;
//	}
//	else
//	{
//		for (int i = 0; i < len; i++)
//		{
//			switch (s[i])
//			{
//			case '(':
//			{
//				ss.push(')');
//				break;
//			}
//			case '{':
//			{
//				ss.push('}');
//				break;
//			}
//			case '[':
//			{
//				ss.push(']');
//				break;
//			}
//			case ')':
//			{
//				if (ss.empty() || ss.top() != ')')
//				{
//					ret = false;
//					return ret;
//				}
//				else
//				{
//					ss.pop();
//					ret = true;
//				}
//				break;
//			}
//			case '}':
//			{
//				if (ss.empty() || ss.top() != '}')
//				{
//					ret = false;
//					return ret;
//				}
//				else {
//					ss.pop();
//					ret = true;
//				}
//				break;
//			}
//			case ']':
//			{
//				if (ss.empty() || ss.top() != ']')
//				{
//					ret = false;
//					return ret;
//				}
//				else {
//					ss.pop();
//					ret = true;
//				}
//				break;
//			}
//			}
//		}
//	}
//	if (!ss.empty())
//	{
//		ret = false;
//	}
//	return ret;
//}
//
//int main()
//{
//	string s = "()[]{}";
//	bool ii=isValid(s);
//	cout << ii << endl;
//	return 0;
//}

class ListNode
{
public:
	int val;
	ListNode* next;
	ListNode():val(0), next(NULL)
	{

	}
	ListNode(int _val) :val(_val), next(NULL)
	{

	}

};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
	ListNode lhead;
	ListNode* newnode=&lhead;
	ListNode* tmp = newnode;
	while (list1 != NULL && list2 != NULL)
	{
		if (list1->val <= list2->val)
		{
			tmp->next = list1;
			if (list1 != NULL)
			{
				list1 = list1->next;
				tmp = tmp->next;
			}
			else
			{
				tmp = list2;
				list2 = NULL;
			}
		}
		else
		{
			tmp->next = list2;
			if (list2 != NULL)
			{
				list2 = list2->next;
				tmp = tmp->next;
			}
			else
			{
				tmp = list1;
				list1 = NULL;
			}
		}
	}
	return newnode->next;
}

int main()
{
	ListNode node1(1);
	ListNode node2(2);
	ListNode node3(4);
	node1.next = &node2;
	node2.next = &node3;
	ListNode * list1 = &node1;
	ListNode node4(1);
	ListNode node5(3);
	ListNode node6(4);
	node4.next = &node5;
	node5.next = &node6;
	ListNode * list2 = &node4;
	ListNode* newnode=mergeTwoLists(list1, list2);

	int aa = 0;
	return 0;
}