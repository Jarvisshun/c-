#include "stdio.h"
point(char  *q)
{q+=3;
printf("%c\n",*q);}  
main()  
{  char  b[4]={'a','b','c','d'},*p=b;  
point(p);printf("%c\n",*p);  
}

