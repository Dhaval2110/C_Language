#include<stdio.h>
main()
{
	int i,j,k,l=1;

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

}
