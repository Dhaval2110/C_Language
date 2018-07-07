#include<stdio.h>
main()
{
int i,j,k;
for(i=0;i<6;i++)
{
for(j=0;j<=i;j++)
if(j%2)
printf("0");
else
printf("1");
printf("\n");
}
}
