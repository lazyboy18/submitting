#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>;
//
//int counting(const int* const arr, int k,int sz)
//{ 
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//
//		if (arr[i] == k)
//		{
//			count++;
//		}
//
//	}
//
//	return count;
//
//
//}
//
//int main()
//{
//
//
//	int arr[] = { 1, 2, 3, 2, 3, 2, 1, 3, 1, 2, 3 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	int ret = counting(arr, k, sz);
//	printf("ret=%d", ret);
//
//	return 0;
//
//}

//���������������г��ֵĴ���
//����һ������Ϊ n �ķǽ��������һ���Ǹ������� k ��Ҫ��ͳ�� k �������г��ֵĴ���

//void searching(int sta,int*arr,int k)
//{
//	int ret = sta;
//	int count = 1;
//	while (arr[++sta] == k)
//	{
//		count++;
//	}
//	sta = ret;
//	while (arr[--sta] == k)
//	{
//		count++;
//	}
//
//	printf("��ֵk��arr�����еĸ���:%d\n", count);
//
//}
//int main()
//{
//	int arr[] = { 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 6, 6, 6, 7, 7, 8, 8 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int r = sz - 1;
//	int l = 0;
//	scanf("%d", &k);	
//	int mid;
//	while (l <= r)
//	{
//		mid = (l + r) / 2;
//		if (arr[l] == k)
//		{
//			searching(l,arr,k);
//			break;
//		}
//		if (arr[r] == k)
//		{
//			searching(r,arr,k);
//			break;
//		}
//		if (arr[mid] < k)
//		{
//			l = mid + 1;
//		}
//		if (arr[mid]>k)
//		{
//			r = mid - 1;
//		}
//		if (arr[mid] == k)
//		{
//			searching(mid,arr,k);
//			break;
//		}
//	}
//	if (l > r)
//	{ 
//		printf("��arr������û���ҵ�%d\n",k);
//	}
//	return 0;
//}


