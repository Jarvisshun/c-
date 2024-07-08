#include<stdio.h> 
main()
{
 int a,b; int *p,*p1=&a,*p2=&b;
 scanf("%d%d",&a,&b);
 if(a<b) {p=p1; p1=p2; p2=p;}//1.交换指针p1和p2的值，即交换了p1和p2指向的变量 2.中间变量放两端，交换的变量放中间
 printf("a=%d,b=%d\n",a,b);
 printf("max=%d，min=%d\n",*p1,*p2);//if为真时，*p1，*p2分别表示a，b的值；if为假时，*p1，*p2分别表示b，a的值
}
