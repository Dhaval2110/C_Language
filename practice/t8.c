#include<stdio.h>
main()
{
int i,j,k,n=1;
for(i=-4;i<5;i++)
{
k=i;
if(k<0)
k=-k;
for(j=1;j<=9;j++)
{
/*if(j>k)
printf("%d",n);
else
printf("*");
}*/
if(j%2 && n<=5)
printf("%d ",n);
else
printf("* ");
n++;
}
printf("\n");

}}
