// WAP to insert an element at desired position in an array.

#include<stdio.h>
main()
{
	int a[5],i,j,n,k;

	n = sizeof(a)/sizeof(a[0]);

	printf("Enter elements : \n");		//
	for(i=0;i<n;i++)			//  fill array elements
		scanf("%d",&a[i]);		//
	
	printf("\nEntered array is : ");	//
	for(i=0;i<n;i++)			//  print array
		printf("%d ",a[i]);		//

	printf("\nEnter desired position : ");	//  take desire position
	scanf("%d",&j);				//

	n = n-1;

////////////////////////////////////////////////     logic for shift
	for(i=n;i>j;i--)
		a[i] = a[i-1];
////////////////////////////////////////////////


	printf("\nEnter new element : ");	//   enter new element
	scanf("%d",&k);				//

	a[j] = k;				//   store that element at desire position

	printf("\nNew array is :");		//
	for(i=0;i<=n;i++)			//   print new array
		printf("%d ",a[i]);		//

	printf("\n");
}
