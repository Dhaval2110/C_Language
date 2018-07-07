#include<stdio.h>
main()
{
int num,s=0;
printf("enter the num\n");
scanf("%d",&num);
for(;num;num=num/10)
s=s*10+num%10;
printf("sum=%d\n",s);
}
