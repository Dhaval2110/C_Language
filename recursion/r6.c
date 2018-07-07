#include<stdio.h>
main()
{
int ret;
ret=zap(6);
printf("ret = %d\n",ret);
}
int zap(int n)
{
//if(n<=1) 9
if(n<1)
return 1;
else;
return (zap(n-3)+zap(n-1));
}
