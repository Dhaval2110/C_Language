#include<stdio.h>
main()
{
int n,p,r;
printf("enter num\n");
scanf("%d",&n);
printf("enter pos\n");
scanf("%d",&p);
r=n>>p&1?printf("set\n"):printf("clear\n");
printf("r=%d\n",r);
}

