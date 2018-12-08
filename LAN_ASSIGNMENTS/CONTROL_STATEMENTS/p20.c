
// WAP to find that the entered number is perfect or not.

#include<stdio.h>
main()
{
	int num,c,s=0;

	printf("Enter any number : ");
	scanf("%d",&num);

	for(c=1;c<num;c++)
	{
		if(num%c == 0)
			s=s+c;
	}

	if(s == num)
		printf("Entered number is perfect number.\n");
	else
		printf("Entered number is not perfect number.\n");

} 
