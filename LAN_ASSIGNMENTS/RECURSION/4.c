// Write a recursive function to revese the given number.

#include<stdio.h>
int rev(int);
main()
{
	int n,n1;
	printf("Enter n :");
	scanf("%d",&n);
	n1 = rev(n);
	printf("Reverse number is : %d\n",n1);
}

int rev(int n)
{
	static int s;
	if(n)
	{
		s = s*10+n%10;
		return rev(n/10);
	}
	else
		return s;
}
