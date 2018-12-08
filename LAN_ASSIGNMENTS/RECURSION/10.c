// WAP to find biggest element in array.

#include<stdio.h>
void big(int *,int);
main()
{
	int a[5]={1,12,3,7,6},n;
	
	n = sizeof(a)/sizeof(a[0]);

	big(a,n);

	printf("\n");
}

void big(int *p,int n)
{
	static i,b;
	if(i<n)
	{
		if(p[i]>b)
			b = p[i];
		i++;
		big(p,n);
	}
	else
		printf("Biggest element is %d\n",b);
}
