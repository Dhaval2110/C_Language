// WAP to input 10 numbers through the keyboard into an array and find the  biggest and smallest number in an Unsorted array without using any Sorting Technique.


#include<stdio.h>
main()
{
	int a[10],big,small,i;

	printf("Enter array elements :\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	printf("Entered array is : ");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);

	big = a[0];
	small = a[0];

	for(i=0;i<10;i++)
	{
		if(big < a[i+1])
			big = a[i+1];
		
		if(a[i] < small)
			small = a[i];
	}

	printf("\nBiggest ele : %d\nSmallest ele : %d\n",big,small);

}
