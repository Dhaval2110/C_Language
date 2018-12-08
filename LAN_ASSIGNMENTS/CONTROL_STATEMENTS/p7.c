
// WAP to print armstrong number between 1 to 500

#include<stdio.h>
main()
{
	int num,num1,r=0,s;

//////////////////////////////////////////////
	for(num=1;num<=500;num++)			// taking number from 1 to 500
	{
		num1 = num;
		
		for(;num1;num1=num1/10)
			{
				s=num1%10;
				r=r+(s*s*s);		// logic for checking armstrong number
			}
		if(r == num)				// if the number is armstrong then print the number
		{
			printf("%d\t",num);
		}
		r=0;
	}
/////////////////////////////////////////////

	printf("\n");
}
