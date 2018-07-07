#define SUM(m,n) m+n
int sum(int m,int n)
{
	return m+n;
}
main()
{
	int i=10,j=20,k;
	k=SUM(i,j);
	printf("k=%d\n",k);
	k=sum(i,j);
	printf("k=%d\n",k);
}
