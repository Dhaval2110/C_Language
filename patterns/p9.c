#include<stdio.h>
main()
{
int i,j,k;
char ch='F';
for(i=0;i<=5;i++)
{
for(j=-5;j<=5;j++)
{
k=j;
if(k<0)
k=-k;
if(k<i)
printf("  ");
else
printf("%c ",ch-k);
}
printf("\n");
}
}
