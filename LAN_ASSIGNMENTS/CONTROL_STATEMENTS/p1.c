
// WAP to find factorial of given number

#include<stdio.h>
main()
{
	int num,s=1,i;

	printf("Enter any number : ");		// taking number from user
	scanf("%d",&num);

//////////////////////////////////////////
	for(i=num;i;i--)		//	// logic for taking factorial
	s = s*i;			//
//////////////////////////////////////////

	printf("Factorial = %d\n",s);		// print factorial of given number
}
