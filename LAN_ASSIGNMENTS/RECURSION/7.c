// WAP to print first 100 prime numbers.

#include<stdio.h>
void prime(int,int);
main()
{
	int num,limit;
	num = 1;
	scanf("%d",&limit);
	prime(num,limit);
	printf("\n");
}

void prime(int num,int limit)
{
	int j,c=0;
	static int d;	
	if(d<limit)
	{
		for(j=2;j<num;j++)
		{	
			if(num%j==0)
			c++;
		}
		if(c==0)
		{
			printf("%d ",num);
			d++;
		}
		prime(num+1,limit);
	}
}
