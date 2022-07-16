#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>


//作业1.将数组中的奇数放在左边，将奇数列按大小排序，将偶数列按大小排序

//int* r_bubble_sort(int*arr,int l,int end)//将偶数列按大小排序
//{
//	//错误示范
//	//end=sz
//	assert(arr);
//	int i = 0;
//	//两层循环为王道
//	for (i = l; i < end; i++)
//	{
//		int j = 0;
//		int flag = 1;//判断排序是否完成，提高效率
//		//错误示范
//		//for(j=l;j<end-i;j++);
//		for (j = l; j <end-i+l; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				//排序
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//证明依旧有乱序的嫌疑
//			}
//		}
//		if (flag == 1)//证明升序完成，退出循环
//		{
//			break;
//		}
//
//	}
//	return arr;
//}
//
//int* l_bubble_sort(int*arr, int end)//将奇数列按大小排序
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
//	//1.依次找出左边为偶数的元素，确定下标
//	//2.依次找出右边为奇数的元素，确实其下标
//	//3.交换左右两个元素
//	while (l < r)
//	{
//		while (arr[l] % 2 != 0&&l<r)//找偶数，下标为l
//		{
//			l++;
//		}
//		while (arr[r] % 2 == 0&&l<r)//找奇数，下标为r
//		{
//			r--;
//		}
//		if (l < r)//确保偶数在奇数右边时继续交换
//		{
//			int tmp = arr[l];//创建临时变量辅助交换
//			arr[l] = arr[r];//将原来右边的奇数放在左边
//			arr[r] = tmp;//将原来左边的偶数放在右边
//		}
//	}
//	r = sz - 1;
//	l = 0;
//	int mid;
//	//找到奇数列最左边数的下标
//	//用二分查找提升效率
//	while (l < r)
//	{
//		mid = (l + r) / 2;
//		if (arr[mid] % 2 != 0)//但该项为奇数项时，l值为mid+1
//		{
//			l = mid + 1;
//		}
//		if (arr[mid] % 2 == 0)//当该项为偶数项时，r值为mid-1
//		{
//			r = mid - 1;
//		}
//		if (arr[mid] % 2 != 0 && arr[mid + 1] % 2 == 0)
//			//该项为奇数项且该项右边第一项为偶数项，所以该项就是最右奇数项
//			//跳出循环
//		{
//			break;
//		}
//
//	}
//	l = mid;//最右奇数项的下标
//	r = l + 1;//最左偶数项的下标
//	//由于奇偶排序的参数不同，所以需要两个函数
//	l_bubble_sort(arr, l);//排序奇数项
//	r_bubble_sort(arr, r, sz-1);//排序偶数项
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

//经过这次项目，我终于体会到什么叫写代码花一个小时，修bug花两个小时

//作业2

//struct student{
//
//	char name[20];
//	int num;
//
//}stu;//stu是结构体变量名
//
//int main()
//{
//	struct student*p = &stu;
//	stu.num = 10;
//	//错误示范   *p.a  由于.的优先级比*高，所以无法正确打开
//	//正确示范  (*p).a  p->a  stu.a 
//
//}

//strcmp
//比较字符串
//int main()
//{
//	char*p1 = "abcdef";
//	char*p2 = "sqwer";
//	//比较字符串的首元素ASCI码值大小
//	//依次向后比较直至\0
//	//返回值 >0  <0  ==0
//	//错误示范
//	//if("abcdef"=="sqwer")   比较两个字符串的首元素
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);//-1
//
//	return 0;
//}

//my_strcmp
//int*my_strcmp(const char*p1,const char*p2)
//{
//	assert(p1&&p2);
//	while (1)//比较ASCI码值，所以要用==号
//		//当两者都为'\0'时，ASCI码值为0，跳出循环
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
//		//错误示范  if('\0'== *p1 == *p2 )
//	//等价于else if (*p1=='\0'&&*p2=='\0')
//	//错误示范
//	//if(*p1==*p2=='\0')它会这样子判断，*p1==*p2为真，是非零，所以！='\0'所以条件不成立
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
//	char*p1 = "我是你爹";
//	char*p2 = "我是你爹";
//	int ret=my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//带n的字符串函数

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
//	//指定拷贝的字符个数，如果自身字符数不够，则把\0也拷贝过去
//	printf("%s\n", arr1);
//	return 0;
//}

//my_strncat的实现

//char* my_strncat(char*dest, const char*src, size_t size)
//{
//	assert(dest&&src);
//	//返回dest的首元素地址
//	char*tmp = dest;
//	//将arr2的内容拷贝到arr1上面去
//	//如果拷贝字符有限则需要把\0也要拷贝进去
//	//确定arr1的拷贝位置
//	//错误示范while(*dest++) 因为*dest显示\0后依旧会++，到了赋值时\0前面还有一个\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//找到\0
//	//拷贝
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	//它会把\0拷贝进去的，除非你有意让dest的空间不足
//	return tmp;
//}
//
//int main()
//{
//	char arr1[30] = "I am a";
//	char arr2[] = " boy! who are you?";
//	my_strncat(arr1, arr2, 18);
//	//指定拷贝的字符个数，如果自身字符数不够，则把\0也拷贝过去
//	printf("%s\n", arr1);
//	return 0;
//}

//strncat
//int main()
//{ 
//	char arr1[10] = "abcdef";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 4);
//	//从目标空间的首个\0开始追加，连自身\0也会追加上去
//	//即使size_t过大，也只是追加一个\0
//	return 0;
//}


//strtok的实现

//int main()
//{
//	//192.32.323.   -- 。是分隔符
//	//char* strtok(char*str ,const char*sep)
//	//sep-->sep参数是一个字符串，定义了用作分隔符的字符集合
//	char arr[] = "acsc..csc.swc";
//	char*p = ".";
//	char buf[20];
//	strcpy(buf, arr);
//	char*ret = strtok(buf , p);
//	//传过去buf的首地址，从首地址开始寻找下一个标记，将该标记改为\0,
//	//返回首元素的地址
//	printf("%s\n", ret);//acsc
//	//char*ret=strtok(buf+4, p);  
//	//传过去.的地址，从.处开始找下一个非标记字符，继续寻找下一个标记，
//	//将它改为\0，并返回第一个非标记字符的地址
//	//printf("%s\n", ret);  csc
//	ret = strtok(NULL, p);
//	printf("%s\n",ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	//从所传首地址开始向后寻找标记，将寻找到的第一个标记改为\0并放回所传首地址
//	//第二次传空指针过去，从上一次改为\0的地方开始寻找非标记字符，将该非标记字符的地址记为d1
//	//继续寻找标记，并将标记改为\0，放回d1，直到最后再也找不到标记
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

//my_strtok的自我实现
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
//				错误示范：flag == 0;  我们需要赋值，不是判断
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



