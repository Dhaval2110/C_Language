#include<stdio.h>
main()
{
int i=10;
char *p;
p=&i;
if(*p==10)
printf("little\n");
else
printf("big\n");
}
