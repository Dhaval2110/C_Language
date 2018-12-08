
// WAP to reverse bits of given no. i.e I/P = 12 then O/P = 805306368.

#include<stdio.h>
main()
{
	int num,i,j,m,n;

	printf("Enter any number : ");		// for Enter any number.
	scanf("%d",&num);

	printf("Before swaping number in binary is : ");	// Print number in binary format.

	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8 == 0)		// for saperate every 8 bit of binary format.
			printf(" ");
	}
	printf("\n");

////////////// Process of Reverse the bits ////////////////////////////////

	for(i=0,j=31;i<j;i++,j--)
	{
		m = num>>i&1;
		n = num>>j&1;
		if(m != n)
		{
			num = num^1<<i;
			num = num^1<<j;
		}
	}

////////////////////////////////////////////////////////////////////////

	printf("After swaping new binary format is : ");		// Print revresed binary format

	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8 == 0)
			printf(" ");
	}
	printf("\nAfter swaping new number is : %d\n",num);		// print new decimal number.
}

