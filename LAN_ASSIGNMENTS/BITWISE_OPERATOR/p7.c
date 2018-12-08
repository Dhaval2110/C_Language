
// WAP to rotate bits of binary format at run time.

#include<stdio.h>
main()
{
	unsigned int num,num1,num2;
	int i,c;

	printf("Enter any number :");
	scanf("%u",&num);

	printf("Binary format of given number :");
	for(i=(sizeof(num)*8-1);i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8 == 0)
		printf(" ");
	}
	printf("\n");

	printf("Enter number of time to rotate :");
	scanf("%d",&c);

	num1 = num;
	for(i=0;i<c;i++)
	{
		num1=num>>i&1;
		num2=num>>1;
		if(num1 == 1)
			num=num^1<<31;
		num=num>>1;
	}
//	num1=num;
	printf("%d\n",num);
	printf("New binary format :");
	for(i=(sizeof(num)*8-1);i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8 == 0)
		printf(" ");
	}
	printf("\n");
}
