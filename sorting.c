//sorting algorithms in c

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1.Bubble sort
void bubble_sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	for(j=0;j<n-i-1;j++)
	{
		if(a[j+1]>a[j])
		{
			int t;
			t=a[j+1];
			a[j+1]=a[j];
			a[j]=t;	
		}		
	}
}

//2.Selection sort

void selection_sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			int t;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}


main()
{
	int a[10],i,j,ele;
	int op;
	ele=sizeof(a)/sizeof(a[0]);
	printf("Enter the elements of an array:");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	printf("An entered array is :");
	
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("Enter an option for sorting");
	scanf("%d",&op);
	
	if (op==1)
		bubble_sort(a,ele);
	else if(op==2)
		selection_sort(a,ele);
/*
	else if(op=='3')
		insertion_sort(a,ele);
	else if(op=='4')
		quick_sort(a,ele);
	else if(op=='5')
		heap_sort(a,ele);
	else if(op=='6')
		merge_sort(a,ele);
	else
		printf("Wrong option entered\n");
*/
	for(i=0;i<ele;i++)
		printf("%d ",a[i]);
	printf("\n");
}
