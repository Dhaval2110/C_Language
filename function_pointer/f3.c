#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int (*const p)(int,int);
main()
{
	int n1=10,n2=20,n3,i,j;
	int(*p[4])(int,int);
	p[0]=sum;
	p[1]=sub;
	p[2]=mul;
	p[3]=div;
	for(i=0;i<4;i++)
		printf("%d\n",(*p[i])(n1,n2));
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
