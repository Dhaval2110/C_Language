
// WAP to find complement of a given number,then print it's binary,decimal,octal and hexadecimal format.

#include<stdio.h>
main()
{
	int num,i,res;

	printf("Enter any number in decimal : ");			// taking number from user
	scanf("%d",&num);

	res = ~num;							// apply 1's complement

	printf("1's complement of given number is : %d\n",~num);	// Decimal print

	printf("Binary format of result is :");				// Binary print
	for(i=31;i>=0;i--)
	{
		printf("%d",res>>i&1);
		if(i%8 == 0)
		printf(" ");
	}
	printf("\n");

	printf("Octal format of given number is : %o\n",res);		// Decimal print
	
	printf("Hexadecimal format of given number is : %x\n",res);	// Decimal print

}
