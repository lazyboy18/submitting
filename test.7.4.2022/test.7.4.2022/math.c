#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//
//	//double a = 0.0;
//	//int n = 2;
//	//a =  1.0/n;//ע������֮һ����һ��С��
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

//ָ��
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
////ָ�������ܹ�ͨ�������ò����ı�ԭ�ȵ��ڴ浥Ԫ�����������
////	*pa = 132;
//	//a���������������Ѿ���Ϊ�ַ���
//	//printf("%c\n", a);
//	//printf("%d\n", a);
//
//
//
//
//
//	return 0;
//}

//Ұָ��

//��ַΪ���ֵ
//int main()
//{
//	int*p;
//	*p = 20;
//	//p�ĵ�ַΪ���ֵ���ʽ����ø�ֵ�ᵼ���ڴ��������
//	return 0;
//}

//Խ��
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

//�ռ��ͷ�

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

//��ָ��
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

//ָ��+����
//int main()
//{
//   //��ָ���ӡ����Ԫ��
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int*p = arr;
//	//arr����Ԫ�صĵ�ַ������������Ϊ���Σ�������int*p������
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		/*printf("%d ", *p);
//		p = p + 1;*/
//		//�ȼ�
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
//	//����ȥ������Ԫ�صĵ�ַ���ʶ�����Ҫ��һ��ָ����������գ�����ָ����ָ���������char
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
//	//ǰ������������ĵ�ַ��һ��������������Ԫ�صĵ�ַ��һ
//	int*p = (int*)a;
//	//aû�б�ǿ������ת��
//	/*printf("%p\n", a );
//	printf("%p\n", a + 1);
//*/
//	printf("%c\n", *p);//a
//
//	//printf("%c\n", *p + 1);//��׼ȷ���
//	//p+1�ĵ�ַ��ֵ��p��4��˵��p�Ѿ���ǿ��ת����Ϊint����
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



//����i=10ʱ��p�ĵ�ַ�Ѿ������������һ��Ԫ�صĵ�ַ�����Ա���������ֱ���

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


//��ָ��Ŀռ䱻�ͷ�

//int*test()
//{   
//	//����ִ�н���test()������ϵͳΪ����a���ٿռ䣬Ȼ��a����ʱ����
//	int a = 10;
//	//a�ĵ�ַҲ����ʱ��ַ������ִ���뿪test()��������Զ�����
//	return &a;
//}
////����test()�ķ���ֵ��һ���Ѿ����ٵĵ�ַ
//int main()
//{
//	int*p = test();
//	printf("%d", *p);
//	//��ʱpȥ����һ�������ٵĵ�ַ����������ַ�Ѿ����·��䣬���������Զ�����
//	//���������ʱ�����ĵ�ַ�����ٶ�������Ұָ��
//	return 0;
//}

//ָ�������
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
//	//��������ֵ�ɼ���ָ�������������ֵ����ԭ��ַ���ϻ��ȥn*sizeof(ָ����ָ�������)
//	//����n��ָ�����ӻ��������
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

//ָ���Ĺ�ϵ����

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
//	//arr�����ֵΪ 1 1 1 1 1 1 1 1 1 1 
//	//�ɼ�ָ�����Խ��д�С��ϵ�Ƚ�
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
//		//�ɼ�arr������ʾʱ��arr������Ԫ�صĵ�ַ��arrǰ���&��ʾ�����������飨sizeof��������������ʱ������Ҳ�����������飩
//		//���������arr������������Ԫ�صĵ�ַ
//		//arr+1��ʾ������Ԫ�غ��һ��Ԫ�صĵ�ַ
//		//&arr+1��ʾ��������һ���ڴ浥Ԫ�ĵ�ַ
//		//����arr��������10������Ԫ�أ�����&arr+1����40���ֽ�
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int*pa = &a;
//	int**paa = &pa;
//
//	//����ָ��ָ��ָ�������Ϊһ��ָ���ָ��
//	//����ָ���Ǳ�������ϵͳҲ�Ὺ�ٿռ�洢�������������������ĸ�ֵ��a�ĵ�ַ
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
//	//����ָ������ķ�ʽ����������ǰ��int*������������ǵ�ַ��
//	*arr[0] = 300;
//	printf("%d\n", a);
//
//
//
//	return 0;
//}
