#include<stdio.h>
main()
{
int i,j,k,num=5;
for(i=0;i<5;i++)
{
for(j=0;j<=i;j++)
printf(" ");
for(k=4;k>=i;k--)
printf("%d ",num);

num--;
printf("\n");
}
}
