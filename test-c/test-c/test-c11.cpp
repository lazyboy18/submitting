#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*int i = 0;
	while (i <= 99)
	{
		i++;
		if (i % 2 == 1)
			printf("i=%d\n",i);
	}*/
	/*int age = 2;
	if (age < 18)
		printf("δ����\n");
		printf("����̸����\n");
	*/
	/*int a = 0;
	int b = 2;
	if (a==1)
	    if (b == 2)
	 printf("hehe\n");
	    else
	 printf("haha\n");*/
	/*int a = 1;
	while (a <= 10)
	{
		printf("a=%d\n",a);
		a++;
	}*/

	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//	putchar(ch);
	int ret = 0;
	int ch = 0;
	char password[20] = {0};
	printf("���������룺\n");
	scanf("%s", &password);
	while ((ch = getchar()) != '\n')
	{
		;
	}
	ret = getchar();
	if (ret =='Y')
		printf("��ȷ��\n");
	else
		printf("�����\n");
	
















	return 0;
}