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
	struct information a1={"��־��",172,61.5,"�ھ���","declining",};
	printf("��Ϣ��ѯ�������밴1������밴2�������밴3��ѧϰ״̬�밴4�����ѹ�ϵ�밴5,������ѯ�밴6\n");
	int a = 0;
	/*scanf("%d", &a);*/ /*scanf���������ʹ��������ֵ��while������ѭ����*/
	while (a != 6)
	{   scanf("%d", &a); /*ֻҪ��scanf�����������������Ӧ��ֵ�����ӡ��Ӧ��Ϣ��������switch���ص�whileѭ��������������ֵ����ٴβ鿴��Ϣ��ֱ��������ֵ6���ս�whileѭ����*/
		switch (a)
		{  
		case 1:
			printf("������%s\n", a1.name);
			break;
		case 2:
			printf("��ߣ�%dcm\n", a1.height);
			break;
		case 3:
			printf("���أ�%lfkg\n", a1.weight);
			break;
		case 4:
			printf("ѧϰ״̬��%s\n", a1.situation);
			break;
		case 5:
			printf("���ѹ�ϵ��%s\n", a1.friendship);
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
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
//		if (i = 5)   \\i��ֵΪ5
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
//			printf("hehe\n");/*ֻ��if����ʱ�Ŵ�ӡhehe*/
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