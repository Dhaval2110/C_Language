
// WAP to find complement of particular bit.

#include<stdio.h>
main()
{
	int num,pos,i;

	printf("Enter any number :");			// Taking decimal number
	scanf("%d",&num);

	printf("Binary format of given number is :");	// Binary format of decimal number
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8 == 0)
		printf(" ");
	}

	printf("\nEnter bit position :");		// Taking bit position
	scanf("%d",&pos);

	num = num^1<<pos;

	printf("Binary format of number is now :");
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8 == 0)
		printf(" ");
	}
	printf("\n");
}
