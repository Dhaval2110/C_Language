#include<stdio.h>
main()
{
int i,j;
printf("enter the numbers...\n");
scanf("%d %d",&i,&j);
printf("Before swapping i=%d j=%d\n",i,j);
j=i*j/(i=j);

printf("After swapping i=%d j=%d\n",i,j);
}

