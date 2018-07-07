#include<stdio.h>
void bitrev(int *p);
main()
{
	int num,i;
	printf("Enter the num\n");
	scanf("%d",&num);
	printf("before\n");
	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);
	printf("\n");
	bitrev(&num);
	printf("After\n");

	for(i=31;i>=0;i--)
		printf("%d",num>>i&1);

	printf("\n");
}
void bitrev(int *p)
{
	static int i=0,j=31;
	int m,n;
	if(i<j)
	{
		m=*p>>i&1;
		n=*p>>j&1;
		if(m!=n)
		{
			*p=*p^1<<i;
			*p=*p^1<<j;
		}
		i++;
		j--;
		bitrev(p);
	}
}
