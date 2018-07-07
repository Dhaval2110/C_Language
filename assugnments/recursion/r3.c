#include<stdio.h>
void word(int n);
main()
{
	int num,s=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num>0)
	{
		for(;num;num/10)
			s=s*10+num%10;
	}
	else
		printf("%d is negative",num);
	word(s);
}
void word(int n)
{
	if(n)
	{
		switch(n%10)
		{
			case 0:
				printf("Zero");
				break;

			case 1:
				printf("One");
				break;


			case 2:
				printf("Two");
				break;


			case 3:
				printf("Three");
				break;

			case 4:
				printf("Four");
				break;
			case 5:
				printf("Five");
				break;
			case 6:
				printf("Six");
				break;
			case 7:
				printf("Seven");
				break;

			case 8:
				printf("Eight");
				break;
			case 9:
				printf("Nine");
				break;
		}
		word(n/10);

	}
}
