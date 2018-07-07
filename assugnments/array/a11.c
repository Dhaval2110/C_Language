#include<stdio.h>
main()
{
	int i,j,n,sum;

	printf("Enter value of N : ");
	scanf("%d",&n);

	int a[n];

	for(i=0,j=1;i<n;i++,j++)
		a[i] = j*j;

	printf("Array is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	for(i=0,sum=0;i<n;i++)
		sum = sum+a[i];

	printf("\nsum = %d\n",sum);
}
