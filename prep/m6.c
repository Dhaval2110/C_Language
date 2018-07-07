#define SWAP(m,n,type) {type temp;\
	temp=m;\
	m=n;\
	n=temp;}
main()
{
	int i=10,j=20;
	float k=22.5,l=33.5;
	printf("Before i=%d j=%d\n",i,j);
	SWAP(i,j,int)
		printf("After i=%d j=%d\n",i,j);

	printf("Before k=%f l=%f\n",k,l);
	SWAP(k,l,float)
		printf("After k=%f l=%f\n",k,l);
}
