
// WAP to reverse bits of given number

#include<stdio.h>
main()
{
	int num,i,j,m,n;

	printf("Enter any number in decimal : ");		// Taking number in decimal format
	scanf("%d",&num);

	printf("Binary format of given number is : ");
///////////////////////////////////////////////////////
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);				// Converting from decimal to binary format and print it
		if(i%8 == 0)
		printf(" ");
	}
//////////////////////////////////////////////////////
	for(i=0,j=31;i<j;i++,j--)
	{
		m = num>>i&1;					// checking lsb and msb are same or not if it is not then toggle it
		n = num>>j&1;

		if(m != n)
		{
			num = num^1<<i;
			num = num^1<<j;
		}
	}
/////////////////////////////////////////////////////
	printf("\nNew binary pattern is :");
////////////////////////////////////////////////////
	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);				// prnting new binary format
		if(i%8 == 0)
		printf(" ");
	}
///////////////////////////////////////////////////
	printf("\nNew number is : %d\n",num);			// printing number in decimal format

}
