
// WAP to impliment Calculator using switch.

#include<stdio.h>
main()
{
	int ch,i=0,num1,num2;

	printf("Enter number 1 : ");		// taking number 1
	scanf("%d",&num1);

	printf("Enter number 2 : ");		// taking number 2
	scanf("%d",&num2);

	while(i<5)				// if option is wrong...it will give 4 chance to select right option
	{

		printf("\n\nSelect any option from below:\n\n1> Addition\n2> Substraction\n3> Multiplication\n4> Division\n");
		scanf(" %d",&ch);

		switch(ch)						// logic for options.
		{
			case 1:printf("Result : %d\n",num1+num2);
					break;
	
			case 2:printf("Result : %d\n",num1-num2);
					break;
	
			case 3:printf("Result : %d\n",num1*num2);
					break;

			case 4:printf("Result : %f\n",(float)num1/num2);
					break;

			default: printf("wrong option\n\n");
		}

	if(ch<=4 && ch>=1)
	break;

		i++;

		if(i == 4)
		printf("\n\nThis is your last chance for selecting option\n\n");
	}
}
