#include<stdio.h>
main()
{
	int a[5],ele,i,j,l,big,k,small;

	printf("Enter the data\n");
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);


	for(i=0;i<ele;i++)
		printf("%d ",a[i]);

	big=a[0];
	small=a[0];
	j=0;
	l=0;

/*	for(i=0;i<ele;i++)
		if(a[i]>big)
		{
		big=a[i];
		j=i;
		}
	for(k=0;k<ele;k++)
		if(a[k]<small)
		{
		small=a[k];
		l=k;			
		}
*/
//	for(i=0,k=ele-1;i<ele,k>=0;i++,k--)
	for(i=0;i<ele;i++)
		if(a[i]>big)	
		{
		big=a[i];
		j=i;
		}	
		else if(a[i]<small)
		{
		small=a[i];
		l=i;
		}
printf("Biggest =%d\n",big);
printf("a[%d]\n",j);

printf("Smallest =%d\n",small);
printf("a[%d]\n",l);
}
