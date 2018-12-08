// WAP to reverse the elements of a given array.

#include<stdio.h>
main()
{
	int a[5],i,j,n,t;

	n = sizeof(a)/sizeof(a[0]);

	printf("Enter array elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Array elements : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	for(i=0,j=n-1;i<j;i++,j--)
	{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
	}

	printf("New array is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	printf("\n");
}
