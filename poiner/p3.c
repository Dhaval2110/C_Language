#include<stdio.h>
main()
{
int *ip,i=20;
char *cp,ch='a';
ip=&i;
cp=&ch;
printf("%d %d\n",*ip,*cp);
}
