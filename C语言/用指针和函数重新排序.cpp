#include<stdio.h>
void swap(int *q1,int *q2);

main() 
{int a,b; int *p1,*p2;
 p1=&a; p2=&b;
 printf("����a��b��ֵ��"); scanf("%d%d",&a,&b);
 swap(p1,p2);
 printf("\nmain�Ӵ�С��%d��%d\n",a,b);}//�βεĸı䲻Ӱ��ʵ�ε�ֵ��a��b��ֵû�� 

void swap(int *q1,int *q2)
{int temp;
 if(*q1<*q2) {temp=*q1; *q1=*q2; *q2=temp;}//�м���������ߣ�����������β��� 
 printf("\nswap�Ӵ�С��%d��%d\n",*q1,*q2);}//swap����������β�a��b��ֵ 
