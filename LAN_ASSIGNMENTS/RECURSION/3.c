// Write a recursive function to find the sum of digits of a given number.

#include<stdio.h>
main()
{
	int num,s;
	printf("num : ");
	scanf("%d",&num);
	s = sum(num);
	printf("summation is : %d\n",s);
}

int sum(int num)
{
	static int s;
	if(num)
	{	
		s=s+num%10;
		return sum(num/10);
	}
	else
		return s;
}
