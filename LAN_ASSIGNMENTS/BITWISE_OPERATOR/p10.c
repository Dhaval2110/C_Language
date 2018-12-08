// Write a one line code to compare two numbers using bitwise operators.

#include<stdio.h>
main()
{
	int i,j;
	printf("Enter value of i and j \n");
	scanf("%d %d",&i,&j);
	i^j?printf("Not same.\n"):printf("Both are same\n");
}
