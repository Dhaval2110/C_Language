
// WAP to SET a Bit.


#include<stdio.h>
void main()
{
	int num,bit_position,result;
	printf("Enter any Number : ");
	scanf("%d",&num);
	printf("Enter Bit Position : ");
	scanf("%d",&bit_position);
	result=num|1<<bit_position;
	printf("Number : %d\n",result);
}
