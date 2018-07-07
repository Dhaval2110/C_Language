#include<stdio.h>
main()
{
int num,res;
printf("enter the num and pos\n");
scanf("%d",&num);
res=num&num-1;
if(res)
printf("Even\n");
else
printf("Odd\n");
}
