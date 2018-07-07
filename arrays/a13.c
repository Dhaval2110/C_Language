#include<stdio.h>
main()
{
int a[5],i,j,*p;
printf("Enter the data\n");
i=sizeof(a)/sizeof(a[0]);
for(j=0;j<i;j++)
scanf("%d",&a[j]);

p=a;

for(j=0;j<i;j++)
printf("%d ",*p++);
printf("\n");

}
