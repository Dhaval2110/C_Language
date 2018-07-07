#include<stdio.h>
void large(int *p,int n);
main()
{
	int a[10]={10,20,15,4,9,3,2,1,7,8};
	int n;
	n=sizeof(a)/sizeof(a[0]);
	large(a,n);
	printf("\n");
}
void large(int *p,int n)
{
	static i,b;
	if(i<n)
	{
		if(b>p[i])
			b=p[i];
		i++;
		large(p,n);
	}		
		else
			printf("large=%d\n",b);
}
