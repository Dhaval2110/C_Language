#include<stdio.h>
int palin(int n);
main()
{
	int num,s;
	printf("Enter the num\n");
	scanf("%d",&num);
	s=palin(num);
	if(s==num)
		printf("Plaimnd\n");
	else
		printf("not\n");
}
int palin(int n)
{
	static int s=0;
	if(n)
	{
		s=s*10+n%10;
		palin(n/10);
	}
	else 
		return s;
}

