#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>


//��ҵ1.�������е�����������ߣ��������а���С���򣬽�ż���а���С����

//int* r_bubble_sort(int*arr,int l,int end)//��ż���а���С����
//{
//	//����ʾ��
//	//end=sz
//	assert(arr);
//	int i = 0;
//	//����ѭ��Ϊ����
//	for (i = l; i < end; i++)
//	{
//		int j = 0;
//		int flag = 1;//�ж������Ƿ���ɣ����Ч��
//		//����ʾ��
//		//for(j=l;j<end-i;j++);
//		for (j = l; j <end-i+l; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//֤�����������������
//			}
//		}
//		if (flag == 1)//֤��������ɣ��˳�ѭ��
//		{
//			break;
//		}
//
//	}
//	return arr;
//}
//
//int* l_bubble_sort(int*arr, int end)//�������а���С����
//{
//	assert(arr);
//	int i = 0;
//	for (i = 0; i < end; i++)
//	{
//		int j = 0;
//		int flag =1;
//		for (j = 0; j <end-i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//
//	}
//	return arr;
//}
//
//int* exchange(int*arr, int sz)
//{
//	assert(arr);
//	int l = 0;
//	int r = sz - 1;
//	//1.�����ҳ����Ϊż����Ԫ�أ�ȷ���±�
//	//2.�����ҳ��ұ�Ϊ������Ԫ�أ�ȷʵ���±�
//	//3.������������Ԫ��
//	while (l < r)
//	{
//		while (arr[l] % 2 != 0&&l<r)//��ż�����±�Ϊl
//		{
//			l++;
//		}
//		while (arr[r] % 2 == 0&&l<r)//���������±�Ϊr
//		{
//			r--;
//		}
//		if (l < r)//ȷ��ż���������ұ�ʱ��������
//		{
//			int tmp = arr[l];//������ʱ������������
//			arr[l] = arr[r];//��ԭ���ұߵ������������
//			arr[r] = tmp;//��ԭ����ߵ�ż�������ұ�
//		}
//	}
//	r = sz - 1;
//	l = 0;
//	int mid;
//	//�ҵ�����������������±�
//	//�ö��ֲ�������Ч��
//	while (l < r)
//	{
//		mid = (l + r) / 2;
//		if (arr[mid] % 2 != 0)//������Ϊ������ʱ��lֵΪmid+1
//		{
//			l = mid + 1;
//		}
//		if (arr[mid] % 2 == 0)//������Ϊż����ʱ��rֵΪmid-1
//		{
//			r = mid - 1;
//		}
//		if (arr[mid] % 2 != 0 && arr[mid + 1] % 2 == 0)
//			//����Ϊ�������Ҹ����ұߵ�һ��Ϊż������Ը����������������
//			//����ѭ��
//		{
//			break;
//		}
//
//	}
//	l = mid;//������������±�
//	r = l + 1;//����ż������±�
//	//������ż����Ĳ�����ͬ��������Ҫ��������
//	l_bubble_sort(arr, l);//����������
//	r_bubble_sort(arr, r, sz-1);//����ż����
//	return arr;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,11,13,14,16,0,12,21,32,-1,-6,31,31,35};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	exchange(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//���������Ŀ����������ᵽʲô��д���뻨һ��Сʱ����bug������Сʱ

//��ҵ2

//struct student{
//
//	char name[20];
//	int num;
//
//}stu;//stu�ǽṹ�������
//
//int main()
//{
//	struct student*p = &stu;
//	stu.num = 10;
//	//����ʾ��   *p.a  ����.�����ȼ���*�ߣ������޷���ȷ��
//	//��ȷʾ��  (*p).a  p->a  stu.a 
//
//}

//strcmp
//�Ƚ��ַ���
//int main()
//{
//	char*p1 = "abcdef";
//	char*p2 = "sqwer";
//	//�Ƚ��ַ�������Ԫ��ASCI��ֵ��С
//	//�������Ƚ�ֱ��\0
//	//����ֵ >0  <0  ==0
//	//����ʾ��
//	//if("abcdef"=="sqwer")   �Ƚ������ַ�������Ԫ��
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);//-1
//
//	return 0;
//}

//my_strcmp
//int*my_strcmp(const char*p1,const char*p2)
//{
//	assert(p1&&p2);
//	while (1)//�Ƚ�ASCI��ֵ������Ҫ��==��
//		//�����߶�Ϊ'\0'ʱ��ASCI��ֵΪ0������ѭ��
//	{
//		if (*p1 > *p2)
//		{
//			return 1;
//		}
//		else if (*p1 < *p2)
//		{
//			return -1;
//		}
//		else if (*p1==0&&*p2==0)	
//		//����ʾ��  if('\0'== *p1 == *p2 )
//	//�ȼ���else if (*p1=='\0'&&*p2=='\0')
//	//����ʾ��
//	//if(*p1==*p2=='\0')�����������жϣ�*p1==*p2Ϊ�棬�Ƿ��㣬���ԣ�='\0'��������������
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//}
//
////return (*p1-*p2)
//
//int main()
//{
//	char*p1 = "�������";
//	char*p2 = "�������";
//	int ret=my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//��n���ַ�������

//my_strcmp
//#include<assert.h>
//char* my_strcmp(char*dest, const char*src, size_t sz)
//{
//	assert(dest&&src);
//	char*tmp = dest;
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char arr1[20] = "You are my son!";
//	char arr2[] = "I am your father!";
//	printf("%s\n", arr1);
//	my_strcmp(arr1, arr2, 17);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "he";
//	strncpy(arr1, arr2, 2);
//	//ָ���������ַ���������������ַ������������\0Ҳ������ȥ
//	printf("%s\n", arr1);
//	return 0;
//}

//my_strncat��ʵ��

//char* my_strncat(char*dest, const char*src, size_t size)
//{
//	assert(dest&&src);
//	//����dest����Ԫ�ص�ַ
//	char*tmp = dest;
//	//��arr2�����ݿ�����arr1����ȥ
//	//��������ַ���������Ҫ��\0ҲҪ������ȥ
//	//ȷ��arr1�Ŀ���λ��
//	//����ʾ��while(*dest++) ��Ϊ*dest��ʾ\0�����ɻ�++�����˸�ֵʱ\0ǰ�滹��һ��\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//�ҵ�\0
//	//����
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	//�����\0������ȥ�ģ�������������dest�Ŀռ䲻��
//	return tmp;
//}
//
//int main()
//{
//	char arr1[30] = "I am a";
//	char arr2[] = " boy! who are you?";
//	my_strncat(arr1, arr2, 18);
//	//ָ���������ַ���������������ַ������������\0Ҳ������ȥ
//	printf("%s\n", arr1);
//	return 0;
//}

//strncat
//int main()
//{ 
//	char arr1[10] = "abcdef";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 4);
//	//��Ŀ��ռ���׸�\0��ʼ׷�ӣ�������\0Ҳ��׷����ȥ
//	//��ʹsize_t����Ҳֻ��׷��һ��\0
//	return 0;
//}


//strtok��ʵ��

//int main()
//{
//	//192.32.323.   -- ���Ƿָ���
//	//char* strtok(char*str ,const char*sep)
//	//sep-->sep������һ���ַ����������������ָ������ַ�����
//	char arr[] = "acsc..csc.swc";
//	char*p = ".";
//	char buf[20];
//	strcpy(buf, arr);
//	char*ret = strtok(buf , p);
//	//����ȥbuf���׵�ַ�����׵�ַ��ʼѰ����һ����ǣ����ñ�Ǹ�Ϊ\0,
//	//������Ԫ�صĵ�ַ
//	printf("%s\n", ret);//acsc
//	//char*ret=strtok(buf+4, p);  
//	//����ȥ.�ĵ�ַ����.����ʼ����һ���Ǳ���ַ�������Ѱ����һ����ǣ�
//	//������Ϊ\0�������ص�һ���Ǳ���ַ��ĵ�ַ
//	//printf("%s\n", ret);  csc
//	ret = strtok(NULL, p);
//	printf("%s\n",ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	//�������׵�ַ��ʼ���Ѱ�ұ�ǣ���Ѱ�ҵ��ĵ�һ����Ǹ�Ϊ\0���Ż������׵�ַ
//	//�ڶ��δ���ָ���ȥ������һ�θ�Ϊ\0�ĵط���ʼѰ�ҷǱ���ַ������÷Ǳ���ַ��ĵ�ַ��Ϊd1
//	//����Ѱ�ұ�ǣ�������Ǹ�Ϊ\0���Ż�d1��ֱ�������Ҳ�Ҳ������
//	return 0;
//}

//int main()
//{
//	char arr[] = "abc@def.hhij";
//	char*p = "@.";
//	//char*ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	char*ret;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//my_strtok������ʵ��
//failure

//char*my_strtok(static char * strToken, const char *strDelimit)
//{
//	char*tmp = strToken;
//	assert(strToken&&strDelimit);
//	while (*strToken!=0)
//	{
//		int flag = 1;
//		char*tmp = strDelimit;
//		while (*strDelimit != 0)
//		{
//			if (*strDelimit == *strToken)
//			{
//				����ʾ����flag == 0;  ������Ҫ��ֵ�������ж�
//				flag = 0;
//				break;
//			}
//			strDelimit++;
//		}
//		strDelimit = tmp;
//		if (flag == 0)
//		{
//			*strToken = '\0';
//			break;
//		}
//		strToken++;
//	}
//	return tmp;
//}
//int main()
//{
//	char arr[] = "3.4546.767";
//	char*p = ".";
//	char*ret=my_strtok(arr, p);
//	printf("%s\n", ret);
//	ret=my_strtok(NULL, p);
//	printf("%s\n", ret);
//	return 0;
//}



