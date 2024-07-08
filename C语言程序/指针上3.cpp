#include "stdio.h"
main()
{  int  a=7,b=8,*p,*q,*r;
p=&a;q=&b;
printf("%d,%d\n",a,b);
printf("%d,%d\n",*p,*q);
r=p;  p=q;q=r;
printf("%d,%d\n",a,b);
printf("%d,%d\n",*p,*q);
}

