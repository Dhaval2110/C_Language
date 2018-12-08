#include<stdio.h>
main()
{
	int i,j,k;
	char ch='G';

	for(i=0;i<=6;i++)
	{
		for(j=-6;j<=6;j++)
		{
			k=j;
			if(k<0)
			k=-k;

			if(k>=i)
			printf("%c ",ch-k);

			else
			printf("  ");
		}

	printf("\n");
	}

}
