#include<stdio.h>
struct intruduction 
{
	char name[20]; 
	int height;
	double weight;




};
//void test()
//{
//	int a = 1;
//	a++;
//	printf("a=%d\n", a);
//
//
//
//}
//#define Max 100
//#define Max(x,y)  
//(x>y��  x��y)

//#include<string.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//



//}

int main()
{
	struct intruduction a1 = { "��־��", 172, 62.5 };
	printf("������%s\n",a1.name );
	printf("��ߣ�%dcm\n,", a1.height);
	printf("���أ�%1lfkg\n", a1.weight);
	/*
	int i = 0;
	while (i < 5)
	{
		test();
			i++;
			printf("i=%d\n", i);

	}*/



	/*int a = 20;
	int b = 200;
	int max = 0;
	max = Max(a, b);
	printf("%d\n", max);*/


	/*int a = Max;
	printf("%d\n", a);*/
	/*int a = 10;
	int*p = &a;*/
	/*printf("%p\n", p);*/
	/*&a;
	printf("%p\n", &a);*/
	/**p = 20;
	printf("%d\n", a);
*/







	//printf("��ʦ�����\n");
	////printf("�����Ҵ�ĵ�һ������\n
	/*printf("success implies the perseverance tiredness loniness\n");
	printf("������һ������\n");
	printf("��ĥ����ϰ�����죬����ѧ����һ��Ƥë\n");
	printf("������ �ո�ѧ��һ�㶫��  �ɲ�Ҫ������\n");*/
	///*int num1 = 10;
	//int num2 = 20;
	//if (num1 > num2)
	//	printf("�ϴ�ֵ:%d\n", num1);
	//else
	//	printf("�ϴ�ֵ:%d\n", num2);


	//return 0 ;*/
	/*int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max=%\d", max);*/
	return 0;

}