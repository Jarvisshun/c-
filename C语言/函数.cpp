//所有函数地位平等
//函数定义：返回值类型 函数名(参数){函数体}
#include<stdio.h>
 
void area(int a,int b)//参数必须分别定义，a,b(形式参数)接收main传过来的A,B(实际参数)的值
{int s;
 s=a*b;
 printf("长方形面积为%d",s);}

int main()
{int A,B;
 printf("输入长：",A); scanf("%d",&A);
 printf("输入宽：",B); scanf("%d",&B);
 area(A,B);}//main调用area函数，被调用的函数需写在main函数之前，否则需声明
//声明方式：在main之前加上void area(int a,int b);
