//	  *
//	 * *
//	* * *
//	 * *
//	  *


#include<stdio.h>
main()
{
	int i,j,k;

	for(i=-5;i<=5;i++)		// i is for number of raws
	{
	k=i;
	if(k<0)
	k=-k;

	for(j=0;j<6;j++)		// to print * and spaces
	{
		if(j<k)
		printf(" ");
		else
		printf("* ");
	}

	printf("\n");
	}
}
