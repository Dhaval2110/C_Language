#include<stdio.h>
main()
{
int x=256;
char *p=&x;
p=&x;
*++p=2;
//printf("%d\n",*p++);
printf("%d\n",x);
}
