#define op 1
#if(op==1)
int sum(int i,int j)
{
	return i+j;
}
#elif(op==2)
int sub(int i,int j)
{
	return i-j;
}
#elif(op==3)
int mul(int i,int j)
{
	return i*j;
}
#elif(op==4)
int div(int i,int j)
{
	return i/j;
}
#endif
main()
{
	int n1,n2,n;
	printf("Enter the number\n");
	scanf("%d %d",&n1,&n2);
#if(op==1)
	{
		n=sum(n1,n2);
		printf("n=%d\n",n);
	}
#elif(op==2)
	{
		n=sub(n1,n2);
		printf("n=%d\n",n);
	}
#elif(op==3)
	{
		n=mul(n1,n2);
		printf("n=%d\n",n);
	}
#elif(op==4)
	{
		n=div(n1,n2);
		printf("n=%d\n",n);
	}
#else
	printf("unknown option..\n");
#endif
