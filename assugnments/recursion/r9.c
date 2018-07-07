#include<stdio.h>
void array(int *p,int *q);
main()
{
	int a[10],n,i;
	n=sizeof(a)/sizeof(a[0]);
	printf("Enter ele\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
	array(a,a+n-1);
	printf("Reverse\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	printf("\n");
}
void array(int *p,int *q)
{
	int t;
	if(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		array(p+1,q-1);
	}
}
