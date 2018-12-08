#include<stdio.h>
main()
{
	int i,j,k,l;

	for(i=1;i<=6;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf(" ");
		}

		for(k=0,l=1;k<i;k++)
		{
			printf("%d ",l);
			l=l*(i-k-1)/(1+k);
		}
	printf("\n");
	}

}
