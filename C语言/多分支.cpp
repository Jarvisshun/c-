#include<stdio.h>
int main()
{
 int age;
 printf("年龄：");
 scanf("%d",&age);
 if(age<6) printf("学龄前儿童");
 else if(age<18) printf("青少年");
      else if(age<30) printf("中青年");
           else if(age<50) printf("中年人");
                else printf("老年人"); 
 return 0;
}
