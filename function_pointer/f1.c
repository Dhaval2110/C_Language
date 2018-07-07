#include<stdio.h>
int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
main()
{
	int n1=10,n2=20,n3,i,j;
	int(*p)(int,int);
	p=sum;  //base adress of sun
	n3=(*p)(n1,n2);
	printf("n3=%d\n",n3);
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
