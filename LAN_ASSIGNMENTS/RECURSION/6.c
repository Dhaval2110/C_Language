// WAP that displays a positive integer in words. For ex: if the integer is 3412 then it is displayed as three four one two.

#include<stdio.h>
void display(long long int);
main()
{
 	long long int num,s=0;
	printf("Enter number : ");
	scanf("%lld",&num);
	while(num)
	{
		s = s*10+num%10;
		num = num/10;
	}
	printf("%lld\n",s);
	display(s);
	printf("\n");
}

void display(long long int num)
{
	int ch;
	if(num)
	{
		ch = num%10;
		switch(ch)
		{
			case 0:printf("zero ");
				break;
			case 1:printf("one ");
				break;
			case 2:printf("two ");
				break;
			case 3:printf("three ");
				break;
			case 4:printf("four ");
				break;
			case 5:printf("five ");
				break;
			case 6:printf("six ");
				break;
			case 7:printf("seven ");
				break;
			case 8:printf("eight ");
				break;
			case 9:printf("nine ");
				break;
		}
		display(num/10);
	}
}
