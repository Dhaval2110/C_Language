#include<stdio.h>
main()
{
int num,i,j,k,m;
printf("enter the number\n");
scanf("%d",&num);

for(i=31;i>=0;printf("%d",num>>i&1),i--);
printf("\n");
for(i=0,j=31;i<j;i++,j--)
{
if(num>>i&1 | num>>j&1)
{num=num^1<<i;
num=num^1<<j;
}
}

for(i=31;i>=0;printf("%d",num>>i&1),i--);
printf("\n");
}
