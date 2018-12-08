// Write a C program to find out the biggest number of  three variables using if-else ladder and terinary operator.

#include<stdio.h>
main()
{
	int a,b,c;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);

	a>b?(a>c?printf("a\n"):printf("c\n")):(b>c?printf("b\n"):printf("c\n"));
}
