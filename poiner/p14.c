#include<stdio.h>
main()
{
double d=23.7;
char *cp,i,j;
cp=&d;
cp=cp+7;
for(i=0;i<=7;i++)
{
for(j=7;j>=0;j--)
printf("%d",*cp>>j&1);
//cp=cp-1;
cp--;
}
printf("\n");
}
