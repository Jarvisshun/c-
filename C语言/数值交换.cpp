#include<stdio.h>
int main()
{
int a=4,c=5,t=0;
if(a<c)
 {t=a;
  a=c;
  c=t;}//中间变量放两端，交换变量放中间，首尾相连 
printf("%d %d\n",a,c);
return 0;	
}
