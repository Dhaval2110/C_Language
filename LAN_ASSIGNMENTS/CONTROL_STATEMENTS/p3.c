
// WAP to reverse the digits of any number.	i.e. I/P = 1234, O/P = 4321

#include<stdio.h>
main()
{
	int num,s,r=0;

	printf("Enter any number : ");			// taking number from user
	scanf("%d",&num);

///////////////////////////////////////////////
	for(;num;num = num/10)				// logic to reverse the digits of number
	{
		s = num%10;
		r = r*10 + s;
	}
///////////////////////////////////////////////

	printf("Reverse number is : %d\n",r);		// printing the reverse number
}
