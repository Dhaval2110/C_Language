/*	  *
	 ***
	*****
	 ***
	  *	*/

#include<stdio.h>
main()
{
	int i,j,k;

	for(i=0;i<7;i++)
	{
		for(j=6;j>i;j--)
			printf(" ");
		for(k=0;k<2*i+1;k++)
			printf("*");
	printf("\n");
	}

	for(i=5;i>=0;i--)
	{
		for(j=5;j>=i;j--)
			printf(" ");
		for(k=0;k<2*i+1;k++)
			printf("*");
	printf("\n");
	}
}
