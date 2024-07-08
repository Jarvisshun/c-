#include  <stdio.h>
int  main()  {
     int  score[3][4]  =  {0};   //  初始化二维数组为0
     //  输入第一个学生的成绩
     printf("请输入第一个学生的成绩(空格分隔):");
     scanf("%d  %d  %d  %d",  &score[0][0],  &score[0][1],  &score[0][2],  &score[0][3]);
     score[0][0]  =  100;
     score[0][1]  =  98;
     score[0][2]  =  97;
     score[0][3]  =  100;
     //  输入第二个学生的成绩
     printf("请输入第二个学生的成绩(空格分隔):");
     scanf("%d  %d  %d  %d",  &score[1][0],  &score[1][1],  &score[1][2],  &score[1][3]);
     score[1][0]  =  89;
     score[1][1]  =  95;
     score[1][2]  =  77;
     score[1][3]  =  97;
     //  输入第三个学生的成绩
     printf("请输入第三个学生的成绩(空格分隔):");
     scanf("%d  %d  %d  %d",  &score[2][0],  &score[2][1],  &score[2][2],  &score[2][3]);
     score[2][0]  =  100;
     score[2][1]  =  88;
     score[2][2]  =  92;
     score[2][3]  =  95;
     //  输出所有成绩
     printf("所有成绩如下:");
     for  (int  i  =  0;i  <  3;i++)  {
         for  (int  j  =  0;j  <  4;j++)  
           {  printf("%d",  score[i][j]);  }
         printf("");
     }
     return  0;
}
