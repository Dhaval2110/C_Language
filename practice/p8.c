#include<stdio.h>
main()
{
int i,j,m;
printf("enter the num\n");\
scanf("%d %d",&i,&j);
m=i&j;
if(m==i)
printf("Eq\n");
else
printf("not\n");
}
