#include<stdio.h>
int main()
{
	int a[10];
	int i,m=0;
	printf("������10��Ԫ�أ�"); 
	for(i=0;i<10;i++)
	{scanf("%d",&a[i]);if(a[i]%2!=0)    {m++;}   }
	printf("���������е�����Ԫ�صĸ���Ϊ��%d",m);
	return 0;
 } 
 
