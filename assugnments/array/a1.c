#include<stdio.h>
main()
{
	int a[10],i,j,k,ele,m=1,s=0;
	printf("Enter the elements\n");
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("\n-----------------------\n");

	for(i=0;i<ele;i++)
	{
		if(a[i]%2==0)
		{
			s=s+a[i];
		}
		else
			m=m*a[i];
	}
	printf("s=%d m=%d",s,m);
}

