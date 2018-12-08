// WAP to input 10 numbers through the keyboard into an array and display the results of addition of even numbers and product of odd numbers.

#include<stdio.h>
main()
{
	int a[10],add=0,mul=1,i;

	printf("Enter array elements :\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);

	printf("Array elements are : ");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);

	for(i=0;i<10;i++)
	{
		if(a[i]%2 == 0)
			add = add+a[i];
		else
			mul = mul*a[i];
	}

	printf("\naddition : %d\nMultiplication : %d\n",add,mul);
}
