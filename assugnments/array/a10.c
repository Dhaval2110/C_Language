#include<stdio.h>
main()
{
	int a[10],b[10],d[10],i,j,k,n,c=0;
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
		for(j=i+1,b[i]=a[i];j<n;j++)
		{
			if(a[i] == a[j])			
			{
				d[c++] = a[j];
				for(k=j;k<n;k++)
					a[k]=a[k+1];
				n--;
				j--;
			}
		}
	
	//	if(c==1)
	//		printf("%d ",a[i]);
	}
//////////////////////////////////////////////////////////////////////

	printf("\nnon duplicate array is : ");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);

	printf("\nduplicate array is : ");
	for(i=0;i<c;i++)
		printf("%d ",d[i]);

	printf("\n");
}
