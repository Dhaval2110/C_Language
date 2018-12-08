
// WAP to find that given number is divisble by 8 or not.

#include<stdio.h>
main()
{
	int num,res;

	printf("Enter any number :");
	scanf("%d",&num);

	res = num&7;

	if(res == 0)
	printf("Number is divisble by 8\n");

	else
	printf("Number is not divisble by 8\n");
}
