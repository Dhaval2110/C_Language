#include<stdio.h>
main()
{
int i,j,k;
printf("enter the numbers...\n");
scanf("%d %d",&i,&j);
k=i&(1<<j);
printf("k=%d\n",k);
}

