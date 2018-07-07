#include<stdio.h>
main()
{
int num,res;
printf("Enter num\n");
scanf("%d",&num);
res=num&7;
if(res==0)
printf("y");
else
printf("n");
}
