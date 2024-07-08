#include<stdio.h>
int  main() 
{
    int  i,j;
    int  score[3][4];
    for  (i=0;i<3;i++)  {
         printf("请输入第%d个同学的成绩:",i+1);
    for  (j=0;j<4;j++)  {
         scanf("%d",&score[i][j]);   }    
     }
    for  (i=0;i<3;i++)  {
         printf("第%d个同学的成绩为:",i+1);
    for  (j=0;j<4;j++)  
       { printf("%d \n",score[i][j]);   }
     }
     return  0;
}
