#include<stdio.h>
int main()
{
 int age;
 printf("���䣺");
 scanf("%d",&age);
 if(age<6) printf("ѧ��ǰ��ͯ");
 else if(age<18) printf("������");
      else if(age<30) printf("������");
           else if(age<50) printf("������");
                else printf("������"); 
 return 0;
}
