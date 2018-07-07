#include<stdio.h>
main()
{
double d=23.7;
int *ip,i,j;
ip=&d;
ip++;
//ip=ip+1;
for(i=0;i<2;i++)
{
for(j=31;j>=0;j--)
printf("%d",*ip>>j&1);
//ip=ip-1; 
ip--;
}
printf("\n");
}
