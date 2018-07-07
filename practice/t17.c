#include<stdio.h>
main()
{
int i,j,k,a=0,b=1;
printf("enter term\n");
scanf("%d",&i);
for(j=0;j<i;j++)
{if(j<=1)
k=j;
else
k=a+b;
a=b;
b=k;
printf("%d",k);
}
}
