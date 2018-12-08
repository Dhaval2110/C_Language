// WAP to check that given number is palindrome or not.

#include<stdio.h>
int palindrome(int);
main()
{
	long unsigned int num,c;

	printf("Enter number : ");
	scanf("%lu",&num);

	c = palindrome(num);

	if(c==num)
		printf("Palindrome\n");
	else
		printf("not palindrome\n");
}

int palindrome(int num)
{
	static int s;
	if(num)
	{
		s = s*10+num%10;
		palindrome(num/10);
	}
	else
		return s;
}
