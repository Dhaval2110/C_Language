
//WAP to TOGGLE a BIT.

#include<stdio.h>
main()
{
	int num,bit_position,result;
	printf("Enter any number : ");
	scanf("%d",&num);
	printf("Enter bit position : ");
	scanf("%d",&bit_position);
	result = num ^ 1 << bit_position;
	printf("Result : %d\n",result);
}
