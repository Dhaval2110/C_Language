#include<stdio.h>
main()
{
int i=10,j=20;
int k,*p,*q;
p=&i;
q=&j;
k=*p+*q;
//k=p+q; not possible
printf("%u\n",k);
}
