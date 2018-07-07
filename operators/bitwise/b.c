#include<stdio.h>
main()
{
int i,j,k,l,m,n;
printf("enter the numbers...\n");
scanf("%d %d %d %d %d",&i,&j,&l,&m,&n);
//k=i&j|l&m|n;
k=i|j&l&m|n;
printf("%d %d %d %d %d %d\n",i,j,k,l,m,n);
}
