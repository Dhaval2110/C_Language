// WAP which deletes the duplicate elements of an array.

#include<stdio.h>
main()
{
	int a[10],i,j,k,n;

	n = sizeof(a)/sizeof(a[0]);

	printf("Enter array elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Entered array is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
/////////////////////////////////////////////////////////
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				a[k] = a[k+1];
				n--;
			}
	}
/////////////////////////////////////////////////////////
	printf("\nNew array is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	printf("\n");
}
