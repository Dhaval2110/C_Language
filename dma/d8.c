#include<stdio.h>
#include<stdlib.h>
main()
{
	int r,c,**p,i,j;
	printf("Enter the rows\n");
	scanf("%d",&r);
	printf("Enter the colums\n");
	scanf("%d",&c);

	p=malloc(sizeof(int *)*r);  //memory for pointer 
	for(i=0;i<r;i++)
		p[i]=malloc(sizeof(int)*c); //memory for array

	printf("Enter the data...\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&p[i][j]);
	printf("\n---------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",p[i][j]);
		printf("\n");
	}
}

