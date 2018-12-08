
// WAP to print palindrome number between 0 to 1000.........ex. 11,22,33,444,121,989....

#include<stdio.h>
main()
{
	int num,num1,s,r=0;
////////////////////////////////////////////////////
	for(num=1;num<=1000;num++)
	{
		num1 = num;
		for(;num1;num1=num1/10)				// logic for taking number and reverse it then compare it with origenal number.
		{
			s=num1%10;
			r=r*10+s;
		}

		if(r == num)
		printf("%d\t ",num);
		r=0;
	}
//////////////////////////////////////////////////
	printf("\n");
}
