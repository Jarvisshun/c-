#include<stdio.h>
int main()
{
int a[4],i,sum=0,n,max=0;

for(i=0;i<=3;i++) 
   {printf("\n����%d�²�����",i+1);
    scanf("%d",&a[i]);
	if(a[i]>=500) sum=sum+1;}//forѭ���Ҳ�������500���м����� 

max=a[0];
for(n=0;n<=3;n++) {if(max<a[n]) max=a[n];}//forѭ���Ҳ������ֵ

printf("\n��%d���²�������500�����������%d",sum,max);
}
//tips����������ڼ�����ô�ң� ����500���ڼ�����ô�ң� 
