#include<stdio.h>
main()
{
int i,j,k,l,m,n;
printf("enter the numbers\n");
scanf("%d %d",&i,&m);
printf("i=%d j=%d k=%d l=%d m=%d n=%d\n",i,j,k,l,m,n);
n=i||(j=400)&&(k=0)||(l=0)&&m;
printf("i=%d j=%d k=%d l=%d m=%d n=%d\n",i,j,k,l,m,n);
}
