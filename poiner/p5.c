#include<stdio.h>
main()
{
int i;
float f=3.5;
int *ip;
ip=&f;
for(i=31;i>=0;i--)
printf("%d",*ip>>i&1);

printf("\n");
}
