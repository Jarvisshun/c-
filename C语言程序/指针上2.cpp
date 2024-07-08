#include "stdio.h"
main()
{ 
 int  a[10]={  1,2,3,4,5,6,7,8,9,10},*p;
p=a;
printf("%d\n",a[2]);
printf("%d\n",*(p+2));
printf("%d\n",a[5]);
printf("%d\n",*(p+5));
printf("%d\n",a[7]);
printf("%d\n",*(p+7));

}

