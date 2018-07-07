#include<stdio.h>
main()
{
int i=10,j=20;
//printf("enter the numbers...\n");
//scanf("%d %d",&i,&j);

//k=i++ + ++j;
i=i++ + ++j;  // i=10,j=21,i=33
j=++i + j++; 

printf("i=%d j=%d \n",i,j);
}
