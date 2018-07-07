
#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int (*const p)(int,int);
main()
{
	int n1=10,n2=20,n3,i,j,op;
	int(*p[4])(int,int);
	p[0]=sum;
	p[1]=sub;
	p[2]=mul;
	p[3]=div;
	printf("Enter the option 1)sum\n 2) sub\n 3)mul\n 4)div\n");
	scanf("%d",&op);
	if(op>=1 && op<=4)
	{
	n3=(*p[op-1])(n1,n2);
	printf("n3=%d\n",n3);
	}
	else
	printf("Unknown Option\n");

}
int sum(int i,int j)
{
	return (i+j);
}
int sub(int i,int j)
{
	return (i-j);
}

int mul(int i,int j)
{
	return (i*j);
}

int div(int i,int j) 
{
	return (i/j);
}
