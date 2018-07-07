#include<stdio.h>
main()
{
float f=3.5;
char *cp,i,j;
cp=&f;
cp=cp+3;
for(i=0;i<4;i++)
{
for(j=7;j>=0;j--)
printf("%d",*cp>>j&1);

cp=cp-1;
}
printf("\n");
}
