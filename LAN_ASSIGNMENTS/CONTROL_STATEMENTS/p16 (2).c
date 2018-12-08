
// WAP to print fibbonacci series between 0 to 50.

#include<stdio.h>
main()
{
	int a=0,b=1,c,num;
	printf("Enter limit : ");
	scanf("%d",&num);
	c = a+b;
	printf("%d %d ",a,b);
	
	for(c;c<num;c=a+b)
	{
		a = b;
		b = c;
		printf("%d ",c);
	}
}
