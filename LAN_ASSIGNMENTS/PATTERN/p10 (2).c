#include<stdio.h>
main()
{
	int i,j,k,l;

	for(i=1;i<=5;i++)
	{
	l=1;
		for(j=5;j>i;j--)
			printf(" ");

		for(k=1;k<=2*i-1;k++)
		{
			printf("%d",l);
			l++;
		}
	printf("\n");
	}

	for(i=4;i>=1;i--)
	{
	l=1;
		for(j=4;j>=i;j--)
			printf(" ");

		for(k=0;k<2*i-1;k++)

		{
			printf("%d",l);
			l++;
		}
	printf("\n");
	}
}
