#include<stdio.h>
int main()
{
 int n,sum=0,count=1;
 printf("�����ܺͲ�С��20ʱ��Ϸ����\n"); 
 while(sum<20)
      {
	   printf("\n���ǵ�%d�����������������1-6��һ������",count);
       scanf("%d",&n);
       count++;
       sum=sum+n;
       printf("\n�˴��������Ϊ%d��Ŀǰ�ܺ�Ϊ%d\n",n,sum);}
 if(sum>=20) printf("\n�����ܺͲ�С��20����Ϸ����",sum);
 return 0;
}
