#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//���º���ֻ��������������

//����һ�����������������ݣ�����һ����
void Change(int*arr, int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{ 
		int tmp = 0;
		tmp = arr[i];
		arr[i] = arr2[i];
		arr2[i] = tmp;

	}
	
}

//����init()������arr�����ʼ��Ϊ0;
void init(int*arr ,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{

		arr[i] = 0;

	}

}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//   	init(arr,sz);
//
//
//	return 0;
//}


//����һ��print������ӡ����Ԫ��
void print(int*arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{

		printf("%d ", arr[i]);

	}
	printf("\n");
}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//
//	return 0;
//}

//����һ��reverse�������������ݵ���
//void reverse(int*arr, int sz)
void reverse(int arr[], int sz)
 {
	int i = 0;
	for (i = 0; &arr[i] < &arr[sz - 1 - i]; i++)
	{
		int tmp = 0;
		tmp = arr[i];
		arr[i] = arr[sz - 1 - i];
		arr[sz - 1 - i] = tmp;

	}

	/*for (i = 0; i < sz;i++)
	{
		printf("%d ", arr[i]);

	}
*/
	//��������ϣ�������Ĺ�����Զ��������Խ���ӡ���÷ŵ�main����


}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 , 2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	int arr2[] = { 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Change(arr, arr2, sz);
//	print(arr, sz);
//	print(arr2, sz);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short*p =arr;
//	//��Ϊpָ���ѱ�ת��Ϊshort*���ͣ�����ָ�������Ϊshort
//	//����p+1����2���ֽڣ�ÿ�η���һ���ֽ�
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//		
//	}
//	for (i = 0; i < 5; i++)
//	{
//
//		printf("%d\n", arr[i]);
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	char*p = arr;
//	*(p + 1) = 1;
//	//p�������Ѿ�ת��Ϊchar*����ÿ�η���ֻ����һ���ֽ�
//	//arr[0]=00000001(ʮ������)��>00000101
//	//����arr[0]=1-->arr[0]=257
//	printf("%d\n", arr[0]);
//	printf("%d\n",*p);
//	printf("%d", arr[1]);
//	return 0;
//}

//int main()
//{  
//	int a = 2, b = 3, c = 3;
//	b = ++a;
//	c = a++;
//	b = a++, c++, ++c, ++a;
//	b += a++ + c;
//
//
//	printf("a=%d b=%d c=%d", a, b, c);
//
//
//	return 0;
//}



//�����������1�ĸ�������������

//int my_count(unsigned int n)
////ֻҪ��n�޷��Ż�����ô-1��11111111111111111111111111111111Ҳ���Լ���
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = my_count(n);
//	printf("ret=%d", ret);
//
//	return 0;
//}

//int my_count(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//
//	}
//	return count;
//}

//int my_count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		//ÿ�����㶼��ʹ������λ��һ��1
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//
//	int n = 0;
//	scanf("%d", &n);
//	int ret = my_count(n);
//	printf("ret=%d", ret);
//
//	return 0;
//}

//�������λ�в�ͬλ�ĸ���
//
//int my_count(int n,int m)
//{
//
//	int h = 0;
//	h = n^m;
//	
//	//��λ�����ͬ��Ϊ1��������Ϊ0��
//	int count = 0;
//	while (h)
//	{
//		h= h&(h- 1);
//		count++;
//	}
//	return count;
//
//}
//int main()
//{
//
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n ,&m);
//	int ret = my_count(n,m);
//	printf("ret=%d", ret);
//
//	return 0;
//}

//�ֱ��ӡһ����������������λ��ż��λ
//
//void printgg(int n)
//{
//	int i = 0;
//	printf("��ӡ����λ:\n");
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", ((n >> i) & 1));
//	}
//
//	printf("\n");
//	printf("��ӡż��λ\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", ((n >> i) & 1));
//
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printgg(n);
//
//
//	return 0;
//}

//��ӡ�˷��ھ���
//void print_table(n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n;i ++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i*j);
//
//		}
//		printf("\n");
//
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//
//}


// 7/7/2022

//�ַ�������

//����һ������ÿһλ֮��

//�õݹ���n��k�η�


//�ַ�������

int  my_strlen( char*arr )
{
	int count = 0;
	while (*arr++!='\0')
	{

		count++;
	

	}

	return count;

}



//ѭ��ʽ����
//void Order_change(char*arr, int len)
//{
//
//	char tmp = 0;
//	int i = 0;
//	while (&arr[i] < &arr[len - i - 1])
//	{
//		tmp = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - i - 1] = tmp;
//		i++;
//
//	}
//
//}

//ϸϸƷ��
//void reversegg(char*arr)
//{
//	int len = 0;
//	len = my_strlen(arr);
//	char tmp = 0;
//	tmp = *arr;
//	*arr = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		reversegg(arr+1);
//	}
//	arr[len - 1] = tmp;
//}
//

//int main()
//{
//	char arr[] = "abcdef";
//	//�����ˣ�û��д��arr[]
//	printf("%s", arr);
//	//int len = 0;
//	//len=my_strlen(arr);
//	printf("\n");
//	//Order_change(arr,len);
//	reversegg(arr);
//	printf("%s", arr);
//
//
//	return 0;
//}
//

//����һ������ÿһλ֮��

//int adding(int n)
//{
//	if (n > 9)
//	{
//
//		return n % 10 + adding(n / 10);
//		//��n/10=0ʱ��adding(0)û�зŻ�ֵ
//
//	}
//	else
//		return n;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = adding(n);
//	printf("sum=%d", sum);
//
//	return 0;
//}

double multiple(int n, int k)
{
	if (k == 0)
		//ע��Ⱥ���==
	{
		return 1;
	}
	else if (k >0)
	{
		return n*multiple(n, (k - 1));
	}
	else if (k < 0)
	{
		return 1.0 / multiple(n, -k);
	}

}



int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = multiple(n, k);
	printf("ret=%lf", ret);

	return 0;
}