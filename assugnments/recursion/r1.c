#include<stdio.h>
int reverse(int n);
main()
{
int num;
printf("enter the number\n");
scanf("%d",&num);
printf("Reverse=%d\n",reverse(num));
}
int reverse(int n)
{
static int s=0;
if(n)
{
s=s*10+n%10;
reverse(n/10);
}
else
return s;
}
