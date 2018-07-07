#include<stdio.h>
int fact(int);
main()
{
int n,i;
printf("Enter the number\n");
scanf("%d",&n);
i=fact(n);
printf("%d",i);
printf("\n");
}
int fact(int n)
{
if(n)
return n*fact(n-1);
else
return 1;
}
