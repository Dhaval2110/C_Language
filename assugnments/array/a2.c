#include<stdio.h>
main()
{
	int a[10],i,j,k,l,ele,big,small;
	printf("Enter the elements\n");
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	big=a[0];
	small=a[0];
	k=0;
	l=0;
	printf("\n------------------\n");

	for(i=0;i<ele;i++)
	{
		if(big<a[i+1])
			big=a[i+1];
		if(a[i]<small)
			small=a[i];		
	}	
	printf("big =%d,small=%d\n",big,small);
}

