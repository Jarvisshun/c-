#include<stdio.h>
int main()
{
	int a[10];
	int i,m=0;
	printf("请输入10个元素："); 
	for(i=0;i<10;i++)
	{scanf("%d",&a[i]);if(a[i]%2!=0)    {m++;}   }
	printf("数组中所有的奇数元素的个数为：%d",m);
	return 0;
 } 
 
