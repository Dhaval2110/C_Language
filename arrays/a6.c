#include<stdio.h>
main()
{

	int a[5],ele,i;
	printf("enter the data\n");
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n--------------------------------------------\n");


	for(i=ele-1;i>=0;i--)
		printf("%d ",a[i]);
	printf("\n");
}

