#include<stdio.h>
int perfect(int n);
main()
{
	int num,s;
	printf("Enter the num\n");
	scanf("%d",&num);
	s=perfect(num);
	if(s==num)
		printf("Perfect\n");
	else
		printf("not\n");
}
int perfect(int n)
{
	static int s,c=1;
	if(c<n)
	{
		if(n%c==0)
			s=s+c;
		c++;
		perfect(n);
	}
	else
		return s;
}
