
// WAP to sum digits of given number

#include<stdio.h>
main()
{
	int num,s,r=0;

	printf("Enter any number : ");		// taking number from user
	scanf("%d",&num);

	for(;num;num=num/10)			// logic for adding digits
	{
		s=num%10;
		r = r+s;
	}
	
	printf("Sum = %d\n",r);			// printing result.
}
