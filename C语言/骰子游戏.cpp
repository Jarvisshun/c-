#include<stdio.h>
int main()
{
 int n,sum=0,count=1;
 printf("点数总和不小于20时游戏结束\n"); 
 while(sum<20)
      {
	   printf("\n这是第%d次输入点数，请输入1-6内一个数：",count);
       scanf("%d",&n);
       count++;
       sum=sum+n;
       printf("\n此次输入点数为%d，目前总和为%d\n",n,sum);}
 if(sum>=20) printf("\n点数总和不小于20，游戏结束",sum);
 return 0;
}
