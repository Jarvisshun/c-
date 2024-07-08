#include<stdio.h>
int main()
{
float father,mother,boy,girl;
char gender;//char只接收一个字符
printf("男b女g，性别：");
scanf("%c",&gender);
printf("父亲身高：");
scanf("%f",&father);
printf("母亲身高：");
scanf("%f",&mother);
if(gender=='b')
    {boy=(father+mother)*1.08/2;
     printf("你的身高是%.1f",boy);}
else
    {girl=(father+0.923*mother)/2;
     printf("你的身高是%.1f",girl);}
return 0;
}
