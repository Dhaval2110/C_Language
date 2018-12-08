// WAP to reverse element of array.
#include<stdio.h>
void rev(int *,int *);
main()
{
	int a[5],i,n;

	printf("Enter array elements : \n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);

	printf("Elements are : ");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);

	n = sizeof(a)/sizeof(a[0]);

	rev(a,a+n-1);

	printf("Now Elements are : ");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void rev(int *p,int *q)
{
	static int t;
	if(p<q)
	{
		t = *p;
		*p = *q;
		*q = t;

		rev(p+1,q-1);
	}
		
}
