#include<stdio.h>
main()
{
	int a[8],i,j,k,l,ele;
	printf("Enter the element of an array %d\n",ele);

 	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("Before\n");
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	printf("Enter the element you want to delet\n");
	scanf("%d",&k);
	
	printf("Enter the value\n");
	scanf("%d",&l);

	for(i=ele-1;i<=k-1;i--)
		a[i+1]=a[i];
	a[k-1]=l;


	printf("After\n");
	for(i=0;i<=ele;i++)
		printf("%d ",a[i]);
}
