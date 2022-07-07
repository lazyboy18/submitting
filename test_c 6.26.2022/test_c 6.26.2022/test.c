#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include"Add.h"
//#include<stdlib.h>
//int main()
//{
//	while (1)
//	{
//
//		int i = 0;
//		int ret = 1;
//		int n = 0;
//		int sum=0;
//       /*   float division=0;*/
//		scanf("%d", &n);
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//			sum = sum + ret;
//			/*division = sum/ret;*/
//
//		}
//		printf("ret=%d\n", ret);
//		printf("sum=%d\n", sum);
//		/*printf("division=%10f\n", division);*/
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//		
//	}
//	if (i == sz + 1)
//		printf("找不到\n");
//
//
//
//
//
//
//
//}
//int main()
//{
//	/*写一个代码，在有序数组arr[]找到k值，并获取其下标；*/
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 0;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (k < arr[mid])
//			right = mid - 1;
//		else if (k>arr[mid])
//			left = mid + 1;
//		else if (k = arr[mid])
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)/*假如找不到k值，mid的值必定有一步的关系是：mid = left = right, 下一步必定会使left > right;*/
//		printf("找不到\n");
//
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = { "Welcome to bit!!!!!!" };
//	char arr2[] = { "###################" };
//	int right = strlen(arr1) - 1;     /* strlen属于库函数需要引用头文件"string.h", 用来计算字符串的长度，不包括"\n"的长度；*/
//	/*printf("%d\n", right);
//*/   int left = 0;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);     /*Sleep用以延长屏幕显示时间，单位是毫秒；属于库函数，需要引用"windows.h";*/
//		system("cls");      /*  system("cls")属于库函数，需要引用"stdlib.h",用以清空屏幕内容！	}*/
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int z = 0;
//	printf("100到200的质数有：\n");
//	for (i = 101; i <= 200; i+=2)
//	{         
//		for (z = 2; z <i; z++)
//		{
//			if (i%z == 0)
//			{
//				break;
//			}
//			if (z == i - 1)
//			{
//				printf("i=%d\n", i);
//			}
//			if (i%z != 0)
//			{
//				continue;
//			}
//		}
//	}
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int s = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		for (s = 1; s <= i; s++)
//		{
//
//			printf("%d*%d=%d ", i, s, i*s);
//
//
//
//		}
//		printf("\n");
//
//
//
//
//
//	}
//
//
//
//
//	return 0;
//}
//int main()
//{
//
//about:
//	printf("hehe\n");
//	goto
//		about;
//
//
//
//
//	return 0;
//}




//int Add(int x, int y)
//{
//	
//	int z = 0;
//	z = x + y;
//	return z;
//
//
//
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//Add(a,b)具有返回值，用sum来接收；
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//
//
//
//
//	return 0;
//}
//int get_max(int x,int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//
//
//
//
//int main()
//{
//	int a=10;
//	int b =20;
//	scanf("%d %d",&a,&b);
//	int z= get_max(a, b);
//	printf("两个整数的最大值：%d\n", z);
//	return 0;
//}
//void swap(int*pa, int*pb)
//{   int tmp = 0;
//	tmp=*pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	swap(&a, &b);
//		printf("%d %d\n", a, b);
//	return 0;
//}
//void test(int arr[])
//{   
//	;
//}
//
//
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//
//	test(arr);
//
//
//
//	return 0;
//}      //arr本质上是一个指针！
// int binary_search(int arr1[], int k,int sz)
// {  // int sz = sizeof(arr1) / sizeof(arr1[0]);    
//	 int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (k > arr1[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr1[mid])
//		{
//			right = mid -1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k ,sz);//传过去的是数组arr首元素的地址；
//	if (ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是：%d\n",ret);
//	return 0;
//}
//int main()
//{
//	char c = '\n';
//	printf("you%cyou",c);
//	printf("\\n");
//
//
//
//	return 0;
//} 
//int cycle_year(double x)
//{
//    int  n = 0;
//	double z = 1.00;
//	for (z = 1.00; 1.98 <= z&&z <= 2.02;n++)
//	{
//		z = ((1 + (x / 100)) * z);
//	}
//	return n ;
//}
//int main()
//{
//	double p = 1.22;
//	int  year = cycle_year(p);
//	printf("%.2lf %d ", p, year);
//	return 0;
//}
//失败的尝试！
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//void test(int*pa)
//{    
//	int z = *num % 10;
//	printf("%d", z);
//	num = num - z;
//	main();
//}
//int main()
//{   int num = 0;
//    scanf("%d", &num);
//	test(&num);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int*a = 3;
//	printf("%d", &a);
//
//
//
//	return 0;
//}
//细细品味这个递归函数！
//void print(int num)
//{      if (num > 9)
//    {    print(num/10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//好好品味！
//int main()
//{
//	printf("%d", 10 % 10);
//
//	return 0;
//}
//int my_strlen(char*str)
//{   int count = 0;
//	while (*str != '\0')
//	{ 
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] =  "bit" ;
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}
//int my_strlen(char*str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str+1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d", len);
//	return 0;
//}
//int main()
//{
//	int a = 4;
//	&a;//&是取地址操作符，结果是右操的地址；
//	printf("%d\n", &a);
//	int*p = &a;//int*p是指针变量，变量名为"p",该指针变量储存的是变量a的地址，该变量与&a等价！
//	printf("%d\n", p);
//	*p = 20;// *p中的"*"是解引用操作符，可以理解为打开a的地址所在的空间，将其赋值可以理解为将原先的类型数据取出，再放进去与它原数据类型相同的其他数据！
//	解引用操作符特别有用，可以使外部函数操作实参，只要把实参的地址传递给外部函数即可！
//	printf("%d\n", *p);//打印时用"*p"
//	int c = *p;
//	int*b = &p;//由于p是指针变量，用于储存地址，系统内存也要为这个p开辟一定的空间，这个空间也有相应的地址，因此b用于储存指针变量p的地址！
//	printf("%d\n", b);
//	printf("%d", &p);
//	return 0;
//}
//重要代码，用于解释地址加一为何物
//int main()
//{
//	int a = 2;
//	int*p = &a;
//	int c = p + 1;
//	printf("%d\n%d\n", p, c);
//	return 0;
//}
// important coding!
//int main()
//{
//	char arr[] = "hello";
//	char*p = arr;//arr本身代表arr[]这个数组的第一个元素的地址！
//	int*p1 = &(arr[1]);
//	int*p2 = &(arr[2]);
//	int*p3 = &(arr[3]);
//	int*p4 = &(arr[4]);
//	int*p5 = &(arr[5]);
//	int*p6 = &(arr[6]);
//	printf("%d\n", p);
//	printf("%d\n%d\n%d\n%d\n%d\n%d\n", p1,p2,p3,p4,p5,p6);
//	printf("%c\n", *p);//h
//	printf("%c\n", *p1);//e
//	printf("%c\n", *p6);//?
//	int*p7 = arr + 1;
//	printf("%c\n", *p7);//e，*p7结果与*p1相同，说明arr+1也一个是地址，其与p1所指的地址相同！
//	printf("%d\n", (arr + 1));//arr+1所代表的地址应该与p1相同！ arr+1表示地址需要打印时要加上()!
//	printf("%d\n", p7);//p7等价于arr+1
//	return 0;
//}
//自创式斐波那契数列--循环式
//int Fib(int sum1, int sum2, int n)
//{
//	int k;
//	int sum3;
//	int sum4=2;
//	for (k = 3; k <= n; k++)
//	{   sum3 = sum1 + sum2;
//		sum1 = sum2;
//		sum2 = sum3;
//		sum4 = sum4 + sum3;
//	}
//	printf("sum=%d\n", sum4);
//	return sum3;
//}
//
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d", &n);
//	ret = Fib(1, 1, n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//x




//
//自创式斐波那契数列--函数递归式！！！！！！！！
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 0;
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//写一个程序计算字符串长度！！！！
//int my_strlen(char*arr)
//{   
//	if (*(arr) != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "he";
//	int len = 0;
//	len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//int main()
//{
//
//	printf("hello world");
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7 };
//	char arr2[] = "hello world";
//	char arr3[] = { 'a', 98, 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//28 计算arr1的空间大小，每一个整形元素占用4个字节；
//	printf("%d\n", sizeof(arr2));//12  空格与\0各算一个字符，每个字符占用1个字节；
//	printf("%d\n", sizeof(arr3));//4   非字符串没有结束符\0；
//
//	//测试数组各元素的地址，以arr1为例；
//
//	/*int z = strlen(arr1);*/   //strlen用于求字符串长度；  
//	/*printf("%d\n", strlen(arr1));*/             
//	int z = sizeof(arr1) / sizeof(arr1[0]);             //观察各元素地址可知，
//	                                                    //在一个数组中元素的地址依次连续排列！
//	int i = 0;
//	for (i = 0; i <= z; i++)
//	{
//
//		printf("arr1[%d]=%p\n",i, &arr1[i]);
//
//	}
//	int z = sizeof(arr3) / sizeof(arr3[0]);
//	int i = 0;
//	for (i = 0; i <= z; i++)
//	{
//
//		printf("arr3[%d]=%p\n", i, &arr3[i]);
//
//	}
//	//在十六进制中，A,B,C,D,E,F分别代表；10，11，12，13，14，15！！
//	return 0;
//
//int main()
//{
//	int i;
//	int arr[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };     //列不能省略，必需初始化！
//	//二维数组在派元素时先将第一列排完，然后再排第二行，依次类推！其余空位用0补齐！
//	for (i = 0; i <= 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 2; j++)
//		{   
//			printf("%-2d ", arr[i][j]);
//		}
//		printf("\n");
//
//	}
//	//打印二位数组！！
//	return 0;
//}
//int main()
//{
//	int i;
//	int arr[3][3] = { { 1, 2, 3 }, { 0 }, { 1, 2, 3 } , };
// 	                 第一行      第二行   第三行
//	for (i = 0; i <= 2; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 2; j++)
//		{
//			printf("arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//		
//	}
//
//	return 0;
//}
//int main()
//{
//	char arr[2][3] = { { 'a', 'b', 'c' }, {'v','t','g'} };
//
//
//	return 0;
//}
//int main()
//{
//	char arr[30] = "hello world";
//	printf("%s\n", arr);
//	return 0;
//
//int main()
//{
//	char arr[2][30] = { "hello world", "welcome you " };
//	printf("%s\n", arr[2][30]);
//	return 0;
//}
//void bubble_sort( int arr[],int sz)
////void bubble_sort(int*arr,int sz)与上述形式结果相同；
////数组中的元素地址是连续存储的，计算机知道第一个元素地址便能知道后面元素的地址！！！
////"int arr[]"的意思是系统默认取数组首元素的地址！！
////此时int arr[],本身接收的是 int* arr[0]的地址，指针本身类型是整形。
//{
//	//printf("%p ", arr);打印首元素的地址
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			int tmp = 0;
//			tmp = arr[j + 1];
//			arr[j + 1] = arr[j];
//			arr[j] = tmp;
//			//printf("%p ", arr);打印首元素的地址
//		
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	//传过去的是数组首元素的地址，即&arr[0]
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//比写程序更难的是程序的优化，以下则是上述程序的优化！！！！
//自创优化升级程序，增加功能：排乱序！！！！
//我的观点是：由于我们希望使数按升序排序，因而可以改为先判断数的大小进行（if语句），再决定是否要两数交换！！
//以下程序的功能就在于将较大的数放在较小的数右边，最后达成升序排序！！！！
//void sorting(int arr[], int sz)
//{
//	int count = 0;
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		//  以下程序对flag的应用进一步提高了效率，因为即使数组在第一次二层循环时已经得知数组按升序排序，但依旧会进行i++，这是无用运算，
//		//假如接入flag，那么如果第一次二层循环完成之后得知数组按升序排序，那么返回的flag值为1（因为没有进入二层循环），最终break语句成立，
//		//跳出第一层循环！！！
//		int j;
//		for (j = 0; j < sz - i - 1; j++)
//		{     
//			count++;
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp;
//				tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0;
//				
//			}
//		
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//	printf("count=%d\n", count);
//}
//	int main()
// {
//	int arr[] = {1,2,3,4,5};
//	int sz;
//	int i;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	sorting(arr, sz);
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{   //测试arr  , &arr[0]  ,&arr之间的关系
//	int arr[] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", arr); //004FFCC0
//	printf("%p\n", &arr[0]);//004FFCC0
//	printf("%p\n", &arr); //004FFCC0
//		
//		// 数组名arr一般表示数组首元素的地址两种情况除外，
//	   //第一种是：sizeof（数组名），第二种是：&arr，即求数组的地址(此时arr代表整个数组)
//	//arr+1表示数组arr首元素的下一个元素的地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{ 
//		for (j = 0; j < 3; j++)
//		{ 
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//测试

//int test()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (j == 3)
//				return 8;
//
//		}
//
//	}
//
//}
//
//
//int main()
//{
//
//	int num = 0;
//	test();
//	num = test();
//	printf("%d\n", num);
//	return 0;
//}
