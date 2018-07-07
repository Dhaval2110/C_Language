#include<stdio.h>
main()
{
int i,j,k,m,n,o,l;
printf("enter the numbers..\n");
scanf("%d %d %d %d %d %d",&i,&j,&k,&m,&n,&o);
printf("i=%d j=%d  k=%d m=%d n=%d o=%d l=%d\n",i,j,k,m,n,o,l);
l=i||j&&k||m||n&&o;
printf("i=%d j=%d  k=%d m=%d n=%d o=%d l=%d\n",i,j,k,m,n,o,l);
}


