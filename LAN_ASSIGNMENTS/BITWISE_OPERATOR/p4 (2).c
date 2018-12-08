
// WAP to find given number is +ve or -ve.

#include<stdio.h>
main()
{
	int Num,Result;
	printf("Enter any Number : ");
	scanf("%d",&Num);
	Num&1<<31?printf("Entered Number is Negative\n"):printf("Entered Number is Positive\n");
}
