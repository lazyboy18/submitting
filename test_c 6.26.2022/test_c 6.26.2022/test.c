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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//		
//	}
//	if (i == sz + 1)
//		printf("�Ҳ���\n");
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
//	/*дһ�����룬����������arr[]�ҵ�kֵ������ȡ���±ꣻ*/
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)/*�����Ҳ���kֵ��mid��ֵ�ض���һ���Ĺ�ϵ�ǣ�mid = left = right, ��һ���ض���ʹleft > right;*/
//		printf("�Ҳ���\n");
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
//	int right = strlen(arr1) - 1;     /* strlen���ڿ⺯����Ҫ����ͷ�ļ�"string.h", ���������ַ����ĳ��ȣ�������"\n"�ĳ��ȣ�*/
//	/*printf("%d\n", right);
//*/   int left = 0;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);     /*Sleep�����ӳ���Ļ��ʾʱ�䣬��λ�Ǻ��룻���ڿ⺯������Ҫ����"windows.h";*/
//		system("cls");      /*  system("cls")���ڿ⺯������Ҫ����"stdlib.h",���������Ļ���ݣ�	}*/
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int z = 0;
//	printf("100��200�������У�\n");
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
//	//Add(a,b)���з���ֵ����sum�����գ�
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
//	printf("�������������ֵ��%d\n", z);
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
//}      //arr��������һ��ָ�룡
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
//	int ret = binary_search(arr, k ,sz);//����ȥ��������arr��Ԫ�صĵ�ַ��
//	if (ret == -1)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
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
//ʧ�ܵĳ��ԣ�
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
//ϸϸƷζ����ݹ麯����
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
//�ú�Ʒζ��
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
//	&a;//&��ȡ��ַ��������������Ҳٵĵ�ַ��
//	printf("%d\n", &a);
//	int*p = &a;//int*p��ָ�������������Ϊ"p",��ָ�����������Ǳ���a�ĵ�ַ���ñ�����&a�ȼۣ�
//	printf("%d\n", p);
//	*p = 20;// *p�е�"*"�ǽ����ò��������������Ϊ��a�ĵ�ַ���ڵĿռ䣬���丳ֵ�������Ϊ��ԭ�ȵ���������ȡ�����ٷŽ�ȥ����ԭ����������ͬ���������ݣ�
//	�����ò������ر����ã�����ʹ�ⲿ��������ʵ�Σ�ֻҪ��ʵ�εĵ�ַ���ݸ��ⲿ�������ɣ�
//	printf("%d\n", *p);//��ӡʱ��"*p"
//	int c = *p;
//	int*b = &p;//����p��ָ����������ڴ����ַ��ϵͳ�ڴ�ҲҪΪ���p����һ���Ŀռ䣬����ռ�Ҳ����Ӧ�ĵ�ַ�����b���ڴ���ָ�����p�ĵ�ַ��
//	printf("%d\n", b);
//	printf("%d", &p);
//	return 0;
//}
//��Ҫ���룬���ڽ��͵�ַ��һΪ����
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
//	char*p = arr;//arr�������arr[]�������ĵ�һ��Ԫ�صĵ�ַ��
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
//	printf("%c\n", *p7);//e��*p7�����*p1��ͬ��˵��arr+1Ҳһ���ǵ�ַ������p1��ָ�ĵ�ַ��ͬ��
//	printf("%d\n", (arr + 1));//arr+1������ĵ�ַӦ����p1��ͬ�� arr+1��ʾ��ַ��Ҫ��ӡʱҪ����()!
//	printf("%d\n", p7);//p7�ȼ���arr+1
//	return 0;
//}
//�Դ�ʽ쳲���������--ѭ��ʽ
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
//�Դ�ʽ쳲���������--�����ݹ�ʽ����������������
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
//дһ����������ַ������ȣ�������
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
//	printf("%d\n", sizeof(arr1));//28 ����arr1�Ŀռ��С��ÿһ������Ԫ��ռ��4���ֽڣ�
//	printf("%d\n", sizeof(arr2));//12  �ո���\0����һ���ַ���ÿ���ַ�ռ��1���ֽڣ�
//	printf("%d\n", sizeof(arr3));//4   ���ַ���û�н�����\0��
//
//	//���������Ԫ�صĵ�ַ����arr1Ϊ����
//
//	/*int z = strlen(arr1);*/   //strlen�������ַ������ȣ�  
//	/*printf("%d\n", strlen(arr1));*/             
//	int z = sizeof(arr1) / sizeof(arr1[0]);             //�۲��Ԫ�ص�ַ��֪��
//	                                                    //��һ��������Ԫ�صĵ�ַ�����������У�
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
//	//��ʮ�������У�A,B,C,D,E,F�ֱ����10��11��12��13��14��15����
//	return 0;
//
//int main()
//{
//	int i;
//	int arr[4][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };     //�в���ʡ�ԣ������ʼ����
//	//��ά��������Ԫ��ʱ�Ƚ���һ�����꣬Ȼ�����ŵڶ��У��������ƣ������λ��0���룡
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
//	//��ӡ��λ���飡��
//	return 0;
//}
//int main()
//{
//	int i;
//	int arr[3][3] = { { 1, 2, 3 }, { 0 }, { 1, 2, 3 } , };
// 	                 ��һ��      �ڶ���   ������
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
////void bubble_sort(int*arr,int sz)��������ʽ�����ͬ��
////�����е�Ԫ�ص�ַ�������洢�ģ������֪����һ��Ԫ�ص�ַ����֪������Ԫ�صĵ�ַ������
////"int arr[]"����˼��ϵͳĬ��ȡ������Ԫ�صĵ�ַ����
////��ʱint arr[],������յ��� int* arr[0]�ĵ�ַ��ָ�뱾�����������Ρ�
//{
//	//printf("%p ", arr);��ӡ��Ԫ�صĵ�ַ
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
//			//printf("%p ", arr);��ӡ��Ԫ�صĵ�ַ
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
//	//����ȥ����������Ԫ�صĵ�ַ����&arr[0]
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//��д������ѵ��ǳ�����Ż���������������������Ż���������
//�Դ��Ż������������ӹ��ܣ������򣡣�����
//�ҵĹ۵��ǣ���������ϣ��ʹ������������������Ը�Ϊ���ж����Ĵ�С���У�if��䣩���پ����Ƿ�Ҫ������������
//���³���Ĺ��ܾ����ڽ��ϴ�������ڽ�С�����ұߣ�������������򣡣�����
//void sorting(int arr[], int sz)
//{
//	int count = 0;
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		//  ���³����flag��Ӧ�ý�һ�������Ч�ʣ���Ϊ��ʹ�����ڵ�һ�ζ���ѭ��ʱ�Ѿ���֪���鰴�������򣬵����ɻ����i++�������������㣬
//		//�������flag����ô�����һ�ζ���ѭ�����֮���֪���鰴����������ô���ص�flagֵΪ1����Ϊû�н������ѭ����������break��������
//		//������һ��ѭ��������
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
//{   //����arr  , &arr[0]  ,&arr֮��Ĺ�ϵ
//	int arr[] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", arr); //004FFCC0
//	printf("%p\n", &arr[0]);//004FFCC0
//	printf("%p\n", &arr); //004FFCC0
//		
//		// ������arrһ���ʾ������Ԫ�صĵ�ַ����������⣬
//	   //��һ���ǣ�sizeof�������������ڶ����ǣ�&arr����������ĵ�ַ(��ʱarr������������)
//	//arr+1��ʾ����arr��Ԫ�ص���һ��Ԫ�صĵ�ַ
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

//����

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
