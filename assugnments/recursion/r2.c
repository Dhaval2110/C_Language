#include<stdio.h>
int divisor(int n);
main()
{
int num;
printf("Enter the num\n");
scanf("%d",&num);

printf("Sum of divisor %d\n",divisor(num));
}
int divisor(int n)
{
static s,c=1;
if(c<n)
{
if(n%c==0)
s=s+c;
c++;
divisor(n);
}
else 
return s;
}

