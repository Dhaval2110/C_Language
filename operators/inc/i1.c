#include<stdio.h>
main()
{
int i,j;
printf("enter the numbers...\n");
scanf("%d",&i);
//j=i++;
j=++i + ++i;
printf("i=%d j=%d\n",i,j);
}
