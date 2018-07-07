
#include<stdio.h>
main()
{
int num,res;
printf("enter the num and pos\n");
scanf("%d",&num);
res=num&(1<<31);
if(res==0)
printf("Pos\n");
else
printf("Neg\n");
}

