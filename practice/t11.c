#include<stdio.h>
main()
{
int i,j,k;
for(i=-4;i<5;i++)
{
k=i;
if(k<0)
k=-k;
for(j=8;j>i;j++)
if(k>j)
printf(" ");
else
printf("%d*",j);
}
}


