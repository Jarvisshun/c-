#include<stdio.h>
int main()
{
int a[4],i,sum=0,n,max=0;

for(i=0;i<=3;i++) 
   {printf("\n输入%d月产量：",i+1);
    scanf("%d",&a[i]);
	if(a[i]>=500) sum=sum+1;}//for循环找产量大于500的有几个月 

max=a[0];
for(n=0;n<=3;n++) {if(max<a[n]) max=a[n];}//for循环找产量最大值

printf("\n有%d个月产量大于500，产量最大是%d",sum,max);
}
//tips：产量最大在几月怎么找？ 大于500的在几月怎么找？ 
