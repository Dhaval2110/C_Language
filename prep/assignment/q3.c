#include<stdio.h>
#define SWAP(a,b,c) ((c t;t=a;a=b;b=t);)
main()
{
int x=10,y=20;
SWAP(x,y,int)
printf("%d %d",x,y);
}
