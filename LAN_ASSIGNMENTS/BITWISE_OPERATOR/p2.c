
//WAP to find given number is EVEN or ODD.

#include<stdio.h>
main()
{
	int num,result;
	printf("Enter any Number : ");
	scanf("%d",&num);
	num&1?printf("Entered number is odd\n"):printf("Entered number is even\n");	// Easiest and less memory occupy
/*	result = num & 1;
	if(result)
	printf("Entered number is odd\n");
	else
	printf("Entered number is even\n");
*/	
}
