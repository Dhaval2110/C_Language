#include<stdio.h>
void prime(int n,int c);
main()
{
	int num=1,c=0;
	prime(num,c);
	printf("\n");
}
void prime(int n,int c)
{
	int j;
	if(c<100)
	{
		for(j=2;j<n;j++)
		{
			if(n%j==0)
				break;
		}
		if(n==j)
		{
			printf("%d is prime\n",n);
			c++;
		}
		prime(n+1,c);
	}
}
