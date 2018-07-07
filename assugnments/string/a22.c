#include<stdio.h>
main()
{
	int i,j,k,l;
	char a[30],temp,b[30];
	printf("Enter the strings\n");
	gets(a);
	gets(b);
	for(i=0;a[i];i++)
	{
		if(a[i]>=33 && a[i]<=64 || a[i]>=123 && a[i]<=127)
		{
			for(j=i;a[j];j++)
				a[j]=a[j+1];
			i--;
		}
	}
	for(k=0;b[k];k++)
		if(b[k]>=33 && b[k]<=64 || b[k]>=123 && b[k]<=127)
		{
			for(j=k;b[j];j++)
				b[j]=b[j+1];
			k--;
		}
	for(i=0;a[i];i++)
	{
		for(j=i+1;a[j];j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;b[i];i++)
	{
		for(j=i+1;b[j];j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	l=strcmp(a,b);
	if(l==0)
		printf("Anargram\n");
	else
		printf("Not\n");
}

