#include<stdio.h>
main()
{
int num,i,j;
printf("Enter number\n");
scanf("%d",&num);
for(i=7;i>=0;printf("%d",num>>i&1),i--);
for(i=0,j=4;i<j;i++,j++)
{
if(num>>i&1|num>>j&1)
{
num=num^1<<i;
num=num^1<<j;
}
printf("\n");

for(i=7;i>=0;printf("%d",num>>i&1),i--);
}
}
