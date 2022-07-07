#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//
//	//double a = 0.0;
//	//int n = 2;
//	//a =  1.0/n;//注意两边之一必有一个小数
//	//printf("%lf", a);
//
//
//	long long n = 0;
//	scanf("%d", &n);
//	double sum = 0.0;
//	 long long int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//
//		sum = sum + 1.0 / i;
//		printf("i=%d\n", i);
//		printf("%.10lf\n", sum);
//	}
//
//	printf("%.10lf", sum);
//
//
//	return 0;
//}

//int main()
//{
//	double n = 1.0;
//	double sum = 0.0;
//	int count = 0;
//	while (1)
//	{
//
//		printf("n=%.2000lf\n", n);
//		sum = sum + n;
//		printf("sum=%.2000lf\n", sum);
//		n = n*(1 / 2.0);
//		count++;
//		if (count>=53)
//		{
//			
//			break;
//		}
//	
//	}
//	
//
//
//	return 0;
//}

//指针
//int main()
//{
//	//printf("%d\n", sizeof(char*));//4
//	//printf("%d\n", sizeof(int*));//4
//	//printf("%d\n", sizeof(float*));//4
//	//printf("%d\n", sizeof(double*));//4
//
//	int a = 0x12345678;
//	/*int*pa = &a;
//	*pa = 10;*/
//	char*pa = &a;
//	*pa = 0;
////指针类型能够通过解引用操作改变原先的内存单元里的数据类型
////	*pa = 132;
//	//a变量的数据类型已经变为字符了
//	//printf("%c\n", a);
//	//printf("%d\n", a);
//
//
//
//
//
//	return 0;
//}

//野指针

//地址为随机值
//int main()
//{
//	int*p;
//	*p = 20;
//	//p的地址为随机值，故解引用赋值会导致内存出现问题
//	return 0;
//}

//越界
//int main()
//{
//	int arr[10] = { 0 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;
//
//	}
//
//
//
//	return 0;
//}

//空间释放

//int*test()
//{
//
//	int a = 10;
//	return &a;
//
//
//
//
//}
//
//int main()
//{
//
//
//	int*p=test();
//	printf("%p\n", *p);
//
//	return 0;
//}

//空指针
//int main()
//{
//	int a = 10;
//	int*pa = &a;
//	*pa = 20;
//	pa = NULL;
//	if (pa != NULL)
//	{
//		*pa = 30;
//
//	}
//
//
//
//	return 0;
//}

//指针+整数
//int main()
//{
//   //用指针打印数组元素
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int*p = arr;
//	//arr是首元素的地址，而其内容又为整形，所以用int*p来接收
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		/*printf("%d ", *p);
//		p = p + 1;*/
//		//等价
//		printf("%d ", *p++);
//
//
//	}
//
//	return 0;
//}

//int my_strlen(char*str)
////
//{
//	/*int i = 0;
//	while (*str++ != '\0')
//	{
//		i++;
//	}
//
//	int z = &str[i] - &str[0];*/
//
//	char*start = str;
//	char*end = str;
//	while (*end != '\0')
//	{
//
//		end++;
//
//	}
//
//	return end - start;
//		
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = 0;
//	len = my_strlen(arr);
//	//传过去的是首元素的地址，故对面需要有一个指针变量来接收，而且指针所指向的类型是char
//	printf("len=%d\n", len);
//	return 0;
//}

//int main()
//{
//	char a[ ] = {'a','b','c','d','e'};
//	/*char*p = &a;
//	char*pa = a;
//	printf("%p ========%p", p, pa);
//	printf("\n");
//	printf("%p   %p", &a+1  ,a+1 );*/
//	//前者是整个数组的地址加一，后者是数组首元素的地址加一
//	int*p = (int*)a;
//	//a没有被强制类型转化
//	/*printf("%p\n", a );
//	printf("%p\n", a + 1);
//*/
//	printf("%c\n", *p);//a
//
//	//printf("%c\n", *p + 1);//不准确表达
//	//p+1的地址数值比p大4，说明p已经被强制转化成为int类型
//	printf("%c\n", *(p + 1));//e
//
//
//	return 0;
//}

//int main()
//{
//	char a[20] = "you_are_a_girl ";
//	char *pa = a;
//	char **paa = &pa;
//	
//	//printf("%c\n", **paa);
//	printf("%c\n", **paa);
//
//
//	return 0;
//}

//int main()
//{
//
//	printf("%.2lf", 22.02);
//
//	return 0;
//}



//由于i=10时，p的地址已经超出数组最后一个元素的地址，所以编译器会出现报错

//int main()
//{
//	int arr[10] = {0};
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//
//		*(p++)= i;
//
//	}
//
//
//	return 0;
//}


//所指向的空间被释放

//int*test()
//{   
//	//程序执行进入test()函数后，系统为变量a开辟空间，然而a是临时变量
//	int a = 10;
//	//a的地址也是临时地址，程序执行离开test()函数后会自动销毁
//	return &a;
//}
////所以test()的返回值是一个已经销毁的地址
//int main()
//{
//	int*p = test();
//	printf("%d", *p);
//	//此时p去访问一个被销毁的地址，如果这个地址已经重新分配，编译器会自动报错
//	//这就是因临时变量的地址被销毁而产生的野指针
//	return 0;
//}

//指针的重置
//int main()
//{
//	int a = 10;
//	int*p = &a;
//	//printf("%p\n", p);
//	p = NULL;
//	/*int c = 20;
//	int*p = &c;
//	printf("%p\n", p);
//*/
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int*p = &a;
//	int**pa = &p;
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%p\n", p);// 0019FA20
//	printf("%p\n", p + 1);//0019FA24
//	printf("%p\n", pa);//0019FA14
//	printf("%p\n", pa + 1);//0019FA18
//	char b = 'c';
//	char*ph = &b;
//	printf("%d\n", sizeof(char));//1
//	printf("%p\n", ph);//00D1F877
//	printf("%p\n", ph + 1);//00D1F878
//	return 0;
//
//	//由上面数值可见，指针的整数运算后的值等于原地址加上或减去n*sizeof(指针所指向的类型)
//	//其中n是指针所加或减的整数
//}

//int main()
//{
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = &arr[9] - &arr[0];
//	int i = 0;
//	for (i = 0; i <= 9; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//
//	}
//	printf("%d\n", sz);//9
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 14;
//	int*pa = &a;
//	int*pb = &b;
//	int sz = pb - pa;
//	printf("%p\n", pa);
//	printf("%p\n", pb);
//	printf("%d\n", sz);
//	return 0;
//}

//指针间的关系运算

//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	int*vs;
//	for (vs = &arr[9]; vs >= &arr[0]; vs--)
//	{
//
//		*vs = 1;
//
//	}
//		
//	//arr数组的值为 1 1 1 1 1 1 1 1 1 1 
//	//可见指针间可以进行大小关系比较
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int*p = arr;
//	int*p2 = &arr;
//	int*p3 = arr + 1;
//	int*p4 = &arr + 1;
//	    printf("%p\n", p); //012FFC5C
//		printf("%p\n", p2);// 012FFC5C
//		printf("%p\n", p3); //012FFC60
//		printf("%p\n", p4); //012FFC84
//
//		//可见arr单独表示时是arr数组首元素的地址，arr前面加&表示的是整个数组（sizeof（数组名），此时数组名也代表整个数组）
//		//其他情况，arr都代表数组首元素的地址
//		//arr+1表示数组首元素后第一的元素的地址
//		//&arr+1表示数组后面第一个内存单元的地址
//		//由于arr数组中有10个整形元素，所以&arr+1跳过40个字节
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int*pa = &a;
//	int**paa = &pa;
//
//	//二级指针指所指向的类型为一级指针的指针
//	//由于指针是变量所以系统也会开辟空间存储这个变量，而这个变量的赋值就a的地址
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int*arr[] = { &a, &b };
//
//	printf("%p %p\n", arr[0], arr[1]);
//	     //       008FFB40   008FFB34
//
//	//创建指针数组的方式是在数组名前加int*，数组的内容是地址；
//	*arr[0] = 300;
//	printf("%d\n", a);
//
//
//
//	return 0;
//}
