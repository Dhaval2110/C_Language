#include<stdio.h>
main()
{
int n,p;
printf("eneter the numbers...\n");
scanf("%d",&n);
printf("enter the position...\n");
scanf("%d",&p);
//n&1<<p?printf("set\n"):printf("clear\n");
n&1<<p?printf("clear\n"):printf("set\n");

//n>>p&1?printf("set\n"):printf("clear\n");
}

