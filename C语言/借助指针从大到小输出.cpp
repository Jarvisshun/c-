#include<stdio.h> 
main()
{
 int a,b; int *p,*p1=&a,*p2=&b;
 scanf("%d%d",&a,&b);
 if(a<b) {p=p1; p1=p2; p2=p;}//1.����ָ��p1��p2��ֵ����������p1��p2ָ��ı��� 2.�м���������ˣ������ı������м�
 printf("a=%d,b=%d\n",a,b);
 printf("max=%d��min=%d\n",*p1,*p2);//ifΪ��ʱ��*p1��*p2�ֱ��ʾa��b��ֵ��ifΪ��ʱ��*p1��*p2�ֱ��ʾb��a��ֵ
}
