#include<stdio.h>
main()
{
unsigned int num=4294967295,j;
for(j=31;j>=0;j--)
printf("%d",num>>j&1);
}
