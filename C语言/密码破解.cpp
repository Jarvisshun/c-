#include<stdio.h>
int main()
{
 int pw,i;
 printf("������һ����λ�����ڵ����룺"); scanf("%d",&pw);

 for(i=1;i<=9999999;i++)
    if(pw==i){printf("\n�����뱻�ƽ��ˣ���%d",pw); break;}

 return 0;
}
