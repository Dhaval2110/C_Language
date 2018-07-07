#include<stdio.h>
int sum(int,int);
int call(int,int,int(*)(int,int));
main()
{
	int n1=10,n2=20,n3,i,j;
	n3=call(n1,n2,sum);//
	printf("n3=%d\n",n3);
}
int call(int i,int j,int(*p)(int,int))
{
	return ((*p)(i,j));
}
int sum(int i,int j)
{
	return(i+j);
}

