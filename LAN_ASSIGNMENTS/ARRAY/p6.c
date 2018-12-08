// WAP to delete an element at desired position from an array.

#include<stdio.h>
main()
{
	int a[10],i,j,n;

	n = sizeof(a)/sizeof(a[0]);

	printf("Enter elements of array : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Entered array is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	printf("\nEnter desired position : ");
	scanf("%d",&j);

	for(i=j;i<n;i++)
		a[i] = a[i+1];

	a[n-1] = '\0';

	printf("New array is : ");
	for(i=0;a[i];i++)
		printf("%d ",a[i]);
	printf("\n");
}
