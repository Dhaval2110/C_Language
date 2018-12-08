#include<stdio.h>
main()
{
	int i,j;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=2*i-1;j++)
			if(j%2==0)
				printf("*");
			else
				printf("%d",i);
	printf("\n");
	}

	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i*2-1;j++)
			if(j%2==0)
				printf("*");
			else
				printf("%d",i);
	printf("\n");
	}
}
