// WAP to print the non repeted numbers of  a given array.

#include<stdio.h>
main()
{
	int a[10],i,j,k,n,c;
	n = sizeof(a)/sizeof(a[0]);

	printf("Enter elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Entered array is : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	printf("\n");
//////////////////////////////////////////////////////////////////////
	for(i=0;i<n;i++)
	{
		for(j=i+1,c=1;j<n;j++)
		{
			if(a[i] == a[j])			
			{
				c++;
				for(k=j;k<n;k++)
					a[k]=a[k+1];
				n--;
				j--;
			}
		}
	
		if(c==1)
			printf("%d ",a[i]);
	}
//////////////////////////////////////////////////////////////////////
	printf("\n");
}
