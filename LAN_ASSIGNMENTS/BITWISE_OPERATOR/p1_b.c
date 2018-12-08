
//WAP to CLEAR bit.

#include<stdio.h>
main()
{
	int num,bit_position,result;
	printf("Enter any Number : ");
	scanf("%d",&num);
	printf("Enter any bit position : ");
	scanf("%d",&bit_position);
	result = num&~(1<<bit_position);
	printf("Result : %d\n",result);
}
