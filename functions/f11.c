#include<stdio.h>
void bs(int *,int);
main()
{
	int a[5],ele,i,j;
	printf("Enter the ele\n");
	ele=sizeof(a)/sizeof(a[0]);
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	bs(a,ele);
	for(i=0;i<ele;i++)
		printf("Shorted array %d\n",a[i]);
}
void bs(int *p,int n)
{
	int i,j,k;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(p[j]>p[j+1])
			{
				k=p[j];
				p[j]=p[j+1];
				p[j+1]=k;
			}
		}
}
