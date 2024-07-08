#include<stdio.h>
int main()
{
 float km,cost;
 printf("公里数："); scanf("%f",&km);
 if(km<=3) cost=6; else cost=6+(km-3)*2;
 printf("共计花%.2f元",cost);
 return 0;
}
