#include<stdio.h>
main()
{
	int a[8],i,j,k,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the element of an array\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("Before\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("Enter the element you want to delet\n");
	scanf("%d",&k);


	for(i=k-1;i<ele-1;i++)
		a[i]=a[i+1];



	printf("After\n");
	for(i=0;i<ele-1;i++)
		printf("%d ",a[i]);
}
