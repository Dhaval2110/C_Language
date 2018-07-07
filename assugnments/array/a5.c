
#include<stdio.h>
main()
{
	int a[5],ele,i,j,k;
	printf("Enter the elements\n");
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("%d",a[i]);
	printf("\n");

	for(i=0,j=ele-1;i<j;i++,j--)

	{
		k=a[i];
		a[i]=a[j];
		a[j]=k;
	}


	for(i=0;i<ele;i++)
		printf("%d",a[i]);


	printf("\n");
}
