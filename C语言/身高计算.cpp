#include<stdio.h>
int main()
{
float father,mother,boy,girl;
char gender;//charֻ����һ���ַ�
printf("��bŮg���Ա�");
scanf("%c",&gender);
printf("������ߣ�");
scanf("%f",&father);
printf("ĸ����ߣ�");
scanf("%f",&mother);
if(gender=='b')
    {boy=(father+mother)*1.08/2;
     printf("��������%.1f",boy);}
else
    {girl=(father+0.923*mother)/2;
     printf("��������%.1f",girl);}
return 0;
}
