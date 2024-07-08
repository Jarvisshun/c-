//现成的数据类型：char，int，double，float等 
//自定义一个新的数据类型——结构体类型
//字符串：char[9]={'L','i','F','o','u','r'};，9个字节8个可用，最后一个是\0，若有空余字节用\0补齐
#include<stdio.h>
main()
{
 struct student     //结构体定义方法，没有分号 
 {char name[9];    //成员
  int age;        //成员 
  char sex;      //成员 
  float score;};//右花括号后面加分号表示结构体自定义完成

 struct student a={"li Four",19,'M',100.5};//给每个成员赋初值(注意单个的字符用单引号引起来)
 printf("%s的年龄%d岁，性别%c，分数%.1f\n\n",a.name,a.age,a.sex,a.score);//%s是字符串输入输出

 //结构体的输入和输出： 
 struct student b;
 printf("b的性别："); scanf("%c",&b.sex);//char类型的往上放 
 printf("b的年龄："); scanf("%d",&b.age);
 printf("b的姓名："); scanf("%s",b.name);//b.name是数组名，所以name就是地址，b.name前面不用加&
 printf("b的分数："); scanf("%f",&b.score);
 printf("\n%s的年龄%d岁，性别%c，分数%.1f",b.name,b.age,b.sex,b.score);
}
