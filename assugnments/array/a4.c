#include<stdio.h>
main()
{
	int a[5],i,k,l,m,big,big1,small,small1,ele;
	printf("Enter the elements\n");
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
	big=a[0];
	small=a[0];
	big1=a[0];
	small1=a[0];

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
{
	if(a[i]<small)
	{
		small1=small;
		small=a[i];
	}
	else if(a[i]<small1)
		small1=a[i];
}

printf("big %d big1 %d small %d small1 %d\n",big,big1,small,small1);


}
