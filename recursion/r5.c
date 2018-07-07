#include<stdio.h>
int prime(int);
main()
{
int n=100,i,j,k;
for(i=0;i<n;i++)
{
for(j=2;j<n;j++)
k=prime(n);

printf("Number %d\n",k);
printf("\n");
}
}
int prime(int n)
{
int l,m;
if(n%m==0)
return 0;
if(l==m)
{
printf("Number %d\n",l);
return l;
}
}
