#define MUL(m,n) (m)*(n)
int mul(int i,int j)
{
return i*j;
}
main()
{
int i=2,j=3,k;
k=MUL(i+2,j+2);
printf("k=%d\n",k);
k=mul(i+2,j+2);
printf("k=%d\n",k);
}
