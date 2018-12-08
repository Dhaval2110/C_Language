// Write a recursive function to print the'n'fibonacci series numbers.

#include<stdio.h>
void fibo(int,int,int);
main()
{
	int a=0,b=1,n;
	printf("n = : ");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	fibo(a,b,n);
	printf("\n");
}

void fibo(int a,int b,int n)
{
	if(a+b<n)
	{
		printf("%d ",a+b);
		fibo(b,a+b,n);
	}

}
