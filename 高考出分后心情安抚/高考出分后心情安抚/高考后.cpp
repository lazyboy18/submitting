#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{    int a = 0;
     printf("��������ĸ߿��ɼ���\n");
     scanf("%d", &a);
	 printf("��ĸ߿��ɼ���:%d��\n", a);
	 if (a >= 610)
		 printf("Congratulation! You will be admitted into a key university! However,be modest,for a wonderful result fails to determine you have a good future,so please work harder!\n  ");
	 else
	 {
		 {
			 printf("Don't be discouraged! The result fails to demonstrate you are a losser!Now here come two choices��two attitude toward your future!\n");
			 printf("���������������ѡ�����������ã��Ա��������밴1;������������ʱһ��Ŭ�����������Σ��밴2\n");
		 }



		 int b = 0;
		 scanf("%d", &b);
		 switch (b)
		 {
		 case 1:
			 printf("������˵��������ǲ������죡��Ϊ�Ա�����ֻ��ʹ��ʧȥ���������Ҫ��ȡ�Ĺ��٣����ٺúÿ���һ�����ѡ��\n");
			 break;
		 case 2:
			 printf("��ϲ�㣡���������ɻ���һ�����õ�ǰ��!��Ϊ��Ȼ��һѧ������Ҫ���������רҵ����������������������ܲ����ഺ�������ɴ�ţ��\n");
			 break;
		 default:
			 printf("������һ��С���!\n");
			 break;
		 }
	 }
	 int c = 0;
	 printf("��������Ŭ��ѧϰ�밴3��ˢ��Ƶ������Ȧ�밴4\n");
	 scanf("%d", &c);
	 if (3 == c)
		 printf("do a good job,give you a good offer\n");
	 else
	 {
		 while (1)
		 {
			 printf("����ˣ�������ֹͣ����뷨��ȥ˯˯��������������ѡ��\n");
		 }
	 }
	return 0;
}