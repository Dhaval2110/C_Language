#include <stdio.h>
main()
{
  int n,a=0,b=1,c,next,i,j;
	for(n=0;n<=50;n++)
{
for(c=0;c<n;c++)
{
if(c<=1)
next=c;
else
{
next=a+b;
a=b;
b=next;
}
printf("%d",next);
}
}
}
