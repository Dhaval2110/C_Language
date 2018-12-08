
// WAP to print binary form of given decimal number by user.

#include<stdio.h>
main()
{
	int num,i;

	printf("Enter any number : ");		// taking decimal number from user
	scanf("%d",&num);

//////////////////////////////////////////
	for(i=31;i>=0;i--)		
	{
		printf("%d",num>>i&1);		// logic to convert decimal to binary
		if(i%8 == 0)
		printf(" ");
	}
/////////////////////////////////////////

	printf("\n");
}
