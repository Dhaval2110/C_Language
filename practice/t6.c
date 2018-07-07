#include<stdio.h>
main()
{
int i,j,k;
for(i=-3;i<4;i++)
{
k=i;
if(k<0)
k=-k;
for(j=0;j<4;j++)
{if(k>j)
printf(" ");
else
printf("* ");
}
printf("\n");

}}
