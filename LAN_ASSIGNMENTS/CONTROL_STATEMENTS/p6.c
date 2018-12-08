
// WAP to ptint firt 100 prime numbers.

#include<stdio.h>
main()

{
	int num=1,i,c=0,d=1;

	while(d<101)					// loop for first 100 numbers
	{
		for(i=1,c=0;i<=num;i++)			// logic for prime number
		{
			if(num%i == 0)
				c++;
		}
		if(c == 2)				// check is it prime number or not
		{
			printf("%d\td=%d\n",num,d);	// if it is prime then print the number
			d++;
		}
		num++;
	}
}
