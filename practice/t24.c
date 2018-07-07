#include<stdio.h>
main()
{
	int a[5],i,j,k,l,m,big,small,big1,small1,ele;
	printf("Enter the elements\n");
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	big=a[0];
	small=a[0];
	big1=a[0];
	small1=a[0];
	j=0;
	l=0;
	for(i=0;i<ele;i++)
	{
		if(a[i]>big)
		{
			big1=big; 	
			big=a[i];
		}	
		else if(a[i]>big1)
			big1=a[i];
	}	

	for(i=0;i<ele;i++)
	{	if(a[i]<small)
		{
			small1=small;
			small=a[i];}
		else if(a[i]<small1)
			small1=a[i];
	}
	printf("biggest=%d\n",big);
	printf("smallest=%d\n",small);

	printf("2nd biggest=%d\n",big1);
	printf("2nd smallest=%d\n",small1);


}
