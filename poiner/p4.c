#include<stdio.h>
main()
{
float f=3.5,*fp;
int *ip;
ip=fp=&f;
printf("*fp=%f *ip=%d\n",*fp,*ip);
}
