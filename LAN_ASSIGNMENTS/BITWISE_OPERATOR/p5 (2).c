
// WAP to find given number is POWER OF 2 or not.

#include<stdio.h>
main()
{
	int num,res,bit=1,i=0;
	printf("Enter any number : ");
	scanf("%d",&num);
	num = num & (num-1);
if(num)
printf("Entered number is not power of 2\n");
else
printf("Entered number is power of 2\n");

/*	for(bit=1;bit<31;bit++)
	{
		res=num&(1<<bit);
		if(res != 0)
		i++;
	}
	if (res=1)
	{
		if (i<=1)
		printf("Entered number is power of 2\n");
		else
		printf("Entered number is not power of 2\n");
	}
	else
		printf("Entered number is not power of 2\n");
	*/
}
