#include<stdio.h>
main()
{
	int a[10],b[10],i,j,c,k=0;

	printf("Enter array :\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	printf("Entered array is : ");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);

	for(i=0;i<10;i++)
	{
		for(j=2,c=0;j<a[i];j++)
		{
			if(a[i]%j == 0)
			c++;
		}

		if(c == 0)
		{
			b[k] = a[i];
			k++;
		}
	}

	printf("\nArray A is : ");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);

	printf("\nArray b is : ");
	for(i=0;i<k;i++)
		printf("%d ",b[i]);

	printf("\n");
}
