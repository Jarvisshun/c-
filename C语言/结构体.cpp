//�ֳɵ��������ͣ�char��int��double��float�� 
//�Զ���һ���µ��������͡����ṹ������
//�ַ�����char[9]={'L','i','F','o','u','r'};��9���ֽ�8�����ã����һ����\0�����п����ֽ���\0����
#include<stdio.h>
main()
{
 struct student     //�ṹ�嶨�巽����û�зֺ� 
 {char name[9];    //��Ա
  int age;        //��Ա 
  char sex;      //��Ա 
  float score;};//�һ����ź���ӷֺű�ʾ�ṹ���Զ������

 struct student a={"li Four",19,'M',100.5};//��ÿ����Ա����ֵ(ע�ⵥ�����ַ��õ�����������)
 printf("%s������%d�꣬�Ա�%c������%.1f\n\n",a.name,a.age,a.sex,a.score);//%s���ַ����������

 //�ṹ������������� 
 struct student b;
 printf("b���Ա�"); scanf("%c",&b.sex);//char���͵����Ϸ� 
 printf("b�����䣺"); scanf("%d",&b.age);
 printf("b��������"); scanf("%s",b.name);//b.name��������������name���ǵ�ַ��b.nameǰ�治�ü�&
 printf("b�ķ�����"); scanf("%f",&b.score);
 printf("\n%s������%d�꣬�Ա�%c������%.1f",b.name,b.age,b.sex,b.score);
}
