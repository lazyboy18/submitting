#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{    int a = 0;
     printf("请输入你的高考成绩！\n");
     scanf("%d", &a);
	 printf("你的高考成绩是:%d分\n", a);
	 if (a >= 610)
		 printf("Congratulation! You will be admitted into a key university! However,be modest,for a wonderful result fails to determine you have a good future,so please work harder!\n  ");
	 else
	 {
		 {
			 printf("Don't be discouraged! The result fails to demonstrate you are a losser!Now here come two choices，two attitude toward your future!\n");
			 printf("往后的人生有两种选择：如果你想摆烂，自暴自弃，请按1;如果你坚持如高三时一样努力，不甘下游，请按2\n");
		 }



		 int b = 0;
		 scanf("%d", &b);
		 switch (b)
		 {
		 case 1:
			 printf("放弃？说明你的心智不够成熟！因为自暴自弃只会使你失去挽回曾经想要夺取的光荣！请再好好考虑一下你的选择！\n");
			 break;
		 case 2:
			 printf("恭喜你！相信你依旧会有一个灿烂的前程!因为虽然第一学历很重要，但计算机专业更看中你的能力！相信你能不负青春，修炼成大牛！\n");
			 break;
		 default:
			 printf("你真是一个小天才!\n");
			 break;
		 }
	 }
	 int c = 0;
	 printf("心无旁骛，努力学习请按3，刷视频与朋友圈请按4\n");
	 scanf("%d", &c);
	 if (3 == c)
		 printf("do a good job,give you a good offer\n");
	 else
	 {
		 while (1)
		 {
			 printf("别废了！请立刻停止你的想法，去睡睡觉，再做出理性选择！\n");
		 }
	 }
	return 0;
}