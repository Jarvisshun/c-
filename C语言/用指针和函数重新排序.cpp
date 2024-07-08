#include<stdio.h>
void swap(int *q1,int *q2);

main() 
{int a,b; int *p1,*p2;
 p1=&a; p2=&b;
 printf("输入a和b的值："); scanf("%d%d",&a,&b);
 swap(p1,p2);
 printf("\nmain从大到小是%d，%d\n",a,b);}//形参的改变不影响实参的值，a，b的值没变 

void swap(int *q1,int *q2)
{int temp;
 if(*q1<*q2) {temp=*q1; *q1=*q2; *q2=temp;}//中间变量放两边，交换变量首尾相接 
 printf("\nswap从大到小是%d，%d\n",*q1,*q2);}//swap中输出的是形参a，b的值 
