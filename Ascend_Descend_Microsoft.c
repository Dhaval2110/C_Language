#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void assend(int *a,int e);
void decsend(int *a,int e);
main()
{
	int a[]={7,3,1,2,8,6,9,11};
	int ele,i,j,k=0,l=0;
	ele=sizeof(a)/sizeof(a[0]);
	int b[10];
	int c[10];
	for(i=0;i<ele;i++)
	{
		if(a[i]&1)
		{
			b[k++]=a[i];
		}
		else
		{
			c[l++]=a[i];
		}
	}
	/*
	for(i=0;i<k;i++)
	printf("%d",b[i]);	
	printf("\n");
	for(i=0;i<l;i++)
	printf("%d",c[i]);*/
	assend(b,k);
	printf("\n");
	decsend(c,l);
}

void assend(int *a,int e)
{
	int i,t,j;
	//e=sizeof(a)/sizeof(a[0]);
	for(i=0;i<e;i++)
	{
		for(j=0;j<e-i-1;j++)
			{	
				if(a[j]<a[j+1])
					{
					t=a[j+1];
					a[j+1]=a[j];
					a[j]=t;
					}
			}
	}
	for(i=0;i<e;i++)
	printf("%d ",a[i]);
}
void decsend(int *a,int e)
{
	int i,t,j;
	//e=sizeof(a)/sizeof(a[0]);
	for(i=0;i<e;i++)
	{
		for(j=0;j<e-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			t=a[j+1];
			a[j+1]=a[j];
			a[j]=t;
			}
		}
	}
	for(i=0;i<e;i++)
	printf("%d ",a[i]);
}

