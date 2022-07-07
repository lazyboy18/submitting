#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct information{
	char name[20];
	int height;
	double weight;
	char situation[20];
	char friendship[20];
};    
int main()
{
	struct information a1={"吴志煜",172,61.5,"内卷中","declining",};
	printf("信息查询：姓名请按1，身高请按2，体重请按3，学习状态请按4，朋友关系请按5,结束查询请按6\n");
	int a = 0;
	/*scanf("%d", &a);*/ /*scanf放在这里会使你输入数值后while进入内循环！*/
	while (a != 6)
	{   scanf("%d", &a); /*只要把scanf放在这里，当你输入相应数值后便会打印相应信息，并结束switch语句回到while循环，继续输入数值便可再次查看信息，直到输入数值6才终结while循环！*/
		switch (a)
		{  
		case 1:
			printf("姓名：%s\n", a1.name);
			break;
		case 2:
			printf("身高：%dcm\n", a1.height);
			break;
		case 3:
			printf("体重：%lfkg\n", a1.weight);
			break;
		case 4:
			printf("学习状态：%s\n", a1.situation);
			break;
		case 5:
			printf("朋友关系：%s\n", a1.friendship);
			break;
		}
	}
	/*int i=0;
for (1 == i; i <= 10; i++)
printf("%d\n", i);
*/  
//	while (1)
//	{
//		int z = 1;
//		int i = 1;
//		int n = 0;
//		int sum = 0;
//		scanf("%d", &n);
//		for (i = 1, z = 1; i <= n; i++)
//		{
//			z = z*i;
//			sum = sum + z;
//		}
//		printf("z=%d\n", z);
//		printf("sum=%d\n", sum);
//	}
//
//
//
	return 0;
}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	int z = arr[mid];
//	while (left <= right)
//	{
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	/*int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i = 5)   \\i赋值为5
//			printf("hehe\n");
//		printf("haha\n");
//
//
//
//
//	}
//*/
//
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			printf("hehe\n");/*只有if成立时才打印hehe*/
//		printf("haha\n");
//
//
//
//
//	}
//
//
//
//
//
//
//}