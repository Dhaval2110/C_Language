#include<stdio.h>
int binary(int);
main()
{
int i,r;
printf("Enter the number\n");
scanf("%d",&i);
r=binary(i);
printf("count =%d\n",r);
}
int binary(int n)
{
int i,c;
for(i=31,c=0;i>=0;i--)
if(n&1<<i)
{
printf("1");
c++;
}
else
printf("0");
printf("\n");
return c;
}
