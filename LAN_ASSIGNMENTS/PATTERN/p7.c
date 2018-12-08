#include<stdio.h>
main()
{
	int i,j;

	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
			if(i%2==0)
				printf("%d ",2*j);
			else
				printf("%d ",2*j-1);
		printf("\n");	
	}

}
