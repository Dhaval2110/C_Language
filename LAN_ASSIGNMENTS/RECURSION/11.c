// WAP to reverse bits of given number.

#include<stdio.h>
int rev(int);
main()
{
	int num,i;

	printf("Enter number : ");
	scanf("%d",&num);

	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
		printf(" ");
	}

	printf("\n");
	num = rev(num);

	for(i=31;i>=0;i--)
	{
		printf("%d",num>>i&1);
		if(i%8==0)
		printf(" ");
	}
	printf("\n");
}
int rev(int num)
{
	static int m,n,i,j=31;
	if(i<j)
	{
		m = num>>i&1;
		n = num>>j&1;
		if(m != n)
		{
			num = num^1<<i;
			num = num^1<<j;
		}
		i++;
		j--;
		rev(num);
	}
	else
		return num;
}
