#include  <stdio.h>
int  main()  {
     int  score[3][4]  =  {0};   //  ��ʼ����ά����Ϊ0
     //  �����һ��ѧ���ĳɼ�
     printf("�������һ��ѧ���ĳɼ�(�ո�ָ�):");
     scanf("%d  %d  %d  %d",  &score[0][0],  &score[0][1],  &score[0][2],  &score[0][3]);
    
     //  ����ڶ���ѧ���ĳɼ�
     printf("������ڶ���ѧ���ĳɼ�(�ո�ָ�):");
     scanf("%d  %d  %d  %d",  &score[1][0],  &score[1][1],  &score[1][2],  &score[1][3]);
     
     //  ���������ѧ���ĳɼ�
     printf("�����������ѧ���ĳɼ�(�ո�ָ�):");
     scanf("%d  %d  %d  %d",  &score[2][0],  &score[2][1],  &score[2][2],  &score[2][3]);
     
     //  ������гɼ�
     printf("����ͬѧ�ĳɼ�Ϊ:");
     for  (int  i  =  0;i  <  3;i++)  {
         for  (int  j  =  0;j  <  4;j++)  
           {  printf("%d",  score[i][j]);  }
         printf("");
     }
     return  0;
}
