#include<stdio.h>
main()
{
int i,j;
printf("enter the numbers....\n");
scanf("%d %d",&i,&j);

printf("Before i=%d j=%d\n",i,j);
i=i+j-(i=j);
printf("After i=%d j=%d\n",i,j);
}
