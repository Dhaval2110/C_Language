#include<stdio.h>
main()
{
int i,j,k;
printf("enter the numbers...\n");
scanf("%d %d",&i,&j);
k=i>>j&1;
printf("k=%d\n",k);
}

