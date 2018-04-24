#include<stdio.h>
int fact(int n)
{
int fact=1;
	while(n)
	{
	fact=fact*n;
	n=n-1;	
	}	
return fact;
}
main()
{
int n,res;
printf("Enter the number");
scanf("%d",&n);
res=fact(n);
printf("%d\n",res);
}
