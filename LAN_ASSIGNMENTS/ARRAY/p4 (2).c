// WAP to findout second largest and second smallest elements of an unsorted array without using any Sorting Technique.

#include<stdio.h>
main()
{
	int a[7],b,s,b1,s1,i,n;

	n = sizeof(a)/sizeof(a[0]);

	printf("Enter array elements : \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Entered array elements are : ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	b = a[0];
	s = a[0];

	for(i=0;i<n;i++)
	{
		if(a[i]>b)
			b=a[i];
		if(a[i]<s)
			s=a[i];
	}

	printf("\nBiggest : %d\nsmallest : %d\n",b,s);
/////////////////////////////////////////////////////////////////////////
	b1 = 0;
	s1 = b;

	for(i=0;i<n;i++)
	{
		if(b1<a[i] && b!=a[i])
			b1 = a[i];
		if(s1>a[i] && s!=a[i])
			s1 = a[i];
	}
/////////////////////////////////////////////////////////////////////////
	printf("Second biggest : %d\nSecond smallest : %d\n",b1,s1);
}
