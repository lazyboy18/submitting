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
//(x>y？  x：y)

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
	struct intruduction a1 = { "吴志煜", 172, 62.5 };
	printf("姓名：%s\n",a1.name );
	printf("身高：%dcm\n,", a1.height);
	printf("体重：%1lfkg\n", a1.weight);
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







	//printf("老师中午好\n");
	////printf("这是我打的第一个代码\n
	/*printf("success implies the perseverance tiredness loniness\n");
	printf("人生第一个代码\n");
	printf("琢磨，练习了两天，终于学到了一点皮毛\n");
	printf("年轻人 刚刚学了一点东西  可不要骄傲啊\n");*/
	///*int num1 = 10;
	//int num2 = 20;
	//if (num1 > num2)
	//	printf("较大值:%d\n", num1);
	//else
	//	printf("较大值:%d\n", num2);


	//return 0 ;*/
	/*int num1 = 10;
	int num2 = 20;
	int max = 0;
	max = Max(num1, num2);
	printf("max=%\d", max);*/
	return 0;

}