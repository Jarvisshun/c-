//���к�����λƽ��
//�������壺����ֵ���� ������(����){������}
#include<stdio.h>
 
void area(int a,int b)//��������ֱ��壬a,b(��ʽ����)����main��������A,B(ʵ�ʲ���)��ֵ
{int s;
 s=a*b;
 printf("���������Ϊ%d",s);}

int main()
{int A,B;
 printf("���볤��",A); scanf("%d",&A);
 printf("�����",B); scanf("%d",&B);
 area(A,B);}//main����area�����������õĺ�����д��main����֮ǰ������������
//������ʽ����main֮ǰ����void area(int a,int b);
