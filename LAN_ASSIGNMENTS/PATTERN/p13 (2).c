#include<stdio.h>
main()
{
	int i,j,k,l=5;

	for(i=4;i>=0;i--)
	{
		for(j=-4;j<=4;j++)
		{
			k=j;
			if(k<0)
			k=-k;

			if(k>=i)
			printf("%d ",l-k);
			else
			printf("  ");
		}
	printf("\n");

	}

}
