//文件类型：文本文件和二进制文件
//文本文件(ASCII码文件)：可用记事本打开，先转换为ASCII码，查表后找到对应字符输出
//二进制文件强行用记事本打开会得到乱码
#include<stdio.h>
main()
{
 FILE *fp; //专门针对文件操作的数据类型，文件中所有操作都通过指针完成
          //三步：打开，操作，关闭
 fp=fopen("D:\\Wu\\file.txt","r");     //1.C语言中两个斜杠表示一个斜杠
                                      //2.read读操作，write覆盖写，append追加写
 if(fp==NULL) printf("文件打开失败");//空指针，fopen调用失败
   else printf("文件打开成功");
 fclose(fp);//关闭fp指针指向的文件 
}
