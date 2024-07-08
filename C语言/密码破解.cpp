#include<stdio.h>
int main()
{
 int pw,i;
 printf("请输入一个七位数以内的密码："); scanf("%d",&pw);

 for(i=1;i<=9999999;i++)
    if(pw==i){printf("\n你密码被破解了，是%d",pw); break;}

 return 0;
}
