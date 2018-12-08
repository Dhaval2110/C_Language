
// WAP to find that the entered number is power of 2 or not.

#include<stdio.h>
main()
{
	int num,i,j=0,num1;

	printf("Enter any number : ");		// Taking number from user.
	scanf("%d",&num);

	for(i=0;i<=(sizeof(i)*8-1);i++)		// converting number into binary format and checking that how many 1s are there
	{
		num1 = num;
		num1=num1>>i&1;
		if(num1 == 1)
			j++;
	}

	if(j>1)
		printf("Entered number is not power of 2...\n");

	else
		printf("Entered number is power of 2....\n");

}
