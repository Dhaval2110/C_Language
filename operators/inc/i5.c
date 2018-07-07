#include<stdio.h>
main()
{
int i,j,x,y;
printf("enter the number..\n");
scanf("%d",&i);
j=i++ + ++i + i++ + ++i;
x=10;
y=++x;
printf("Y is %d\n",y);
}
