#include<stdio.h>
int prime(int);
main()
{
int num,r;
printf("Enter the num\n");
scanf("%d",&num);
r=prime(num);
if(r==0)
printf("Num is not prime\n");
else
printf("Num is prime\n");

}
int prime(int n)
{
int i;
for(i=2;i<n;i++)
if(n%i==0)
break;

if(n==i)
return 1;
else
return 0;
}
