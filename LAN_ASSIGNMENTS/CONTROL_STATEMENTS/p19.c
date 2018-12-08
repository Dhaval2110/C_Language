
// WAP to enter a month number in digit and display month in words..if number is not between 1 to 12 then display "Invalid Month"

#include<stdio.h>
main()
{
	int num;
	
	printf("Enter any number between 1 to 12 for month : ");
	scanf("%d",&num);

	switch(num)
	{
		case 1: printf("January.\n");
			break;
		case 2: printf("Fabruary.\n");
			break;
		case 3: printf("march.\n");
			break;
		case 4: printf("April.\n");
			break;
		case 5: printf("may.\n");
			break;
		case 6: printf("June.\n");
			break;
		case 7: printf("July.\n");
			break;
		case 8: printf("August.\n");
			break;
		case 9: printf("Septmber.\n");
			break;
		case 10: printf("October.\n");
			break;
		case 11: printf("november.\n");
			break;
		case 12: printf("December.\n");
			break;
		default: printf("Invalid month...\n");
	
	}

}
