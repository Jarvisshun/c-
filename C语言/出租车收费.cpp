#include<stdio.h>
int main()
{
 float km,cost;
 printf("��������"); scanf("%f",&km);
 if(km<=3) cost=6; else cost=6+(km-3)*2;
 printf("���ƻ�%.2fԪ",cost);
 return 0;
}
