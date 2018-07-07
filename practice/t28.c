
#include<stdio.h>
main()
{
	int a[10],i,j,k,l,ele;
	printf("Enter the element of an array %d\n",ele);

 	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("Before\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	
	for(i=0;i<ele;i++)
	
