#include<stdio.h>
int main()
{
int a,c,t=0;
printf("请输入两个数：");
scanf("%d %d",&a,&c);
if(a<c)
 {t=a;
  a=c;
  c=t;}
printf("从大到小的顺序是%d，%d\n",a,c); 
return 0;
}
