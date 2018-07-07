#include<stdio.h>
main()
{
	int a[10],b[10],d[10],i,j,n,k,l,c=0;

	n=sizeof(a)/sizeof(a[0]);
	printf("Enter the ele\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	for(i=0;i<n;i++)
	{
		for(j=1+i,b[i]=a[i];j<n;j++)
		{
			if(a[i]==a[j])
			{

				d[c++]=a[j];
				for(k=j;k<n;k++)
					a[k]=a[k+1];
				n--;
				j--;
			}
		}
	}
	printf("Non duplicate is ;\n");
	for(i=0;i<n;i++)
		printf("%d",b[i]);

	printf("duplicate is ;\n");
	for(i=0;i<c;i++)
		printf("%d",d[i]);
}

