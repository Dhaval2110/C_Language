#include<stdio.h>
main()
{
int i,j,k;
printf("enter the numbers..\n");
scanf("%d %d",&i,&j);
printf("i=%d j=%d k=%d\n",i,j,k);
k=i||j;
printf("i=%d j=%d k=%d\n",i,j,k);
}

