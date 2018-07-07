#include<stdio.h>
main()
{
int num,s=0;
printf("n\n");
scanf("%d",&num);
for(;num;num=num/10)
s=s*10+num%10;
printf("%d\n",s);
}
