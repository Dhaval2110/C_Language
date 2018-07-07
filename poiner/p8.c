#include<stdio.h>
main()
{
const int i=10;
int *p;
p=&i;
printf("%d\n",i);
*p=20;
printf("%d\n",i);
}
