// Write a recursive function to find the factorial of a given number..

#include<stdio.h>
unsigned int fact(unsigned int);
main()
{
	unsigned int num,factorial;
	printf("Enter any number : ");
	scanf("%d",&num);
	factorial = fact(num);
	printf("factorial = %d\n",factorial);
}

unsigned int fact(unsigned int num)
{
	if(num)
	return (num*fact(num-1));
	else
	return 1;
}
