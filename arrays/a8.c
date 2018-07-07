#include<stdio.h>
main()
{
int a[10],i,j,ele,temp;
printf("Enter the ele..\n");
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
scanf("%d",&a[i]);


printf("\n-----------------------------\n");

printf("before\n");

for(i=0;i<ele;i++)
printf("%d ",a[i]);

printf("\n");


for(i=0,j=ele-1;i<j;i++,j--)
{
//	temp=a[i];
//	a[i]=a[j];
//	a[j]=temp;

a[j]=a[i]+a[j]-(a[i]=a[j]);	
}
printf("After\n");	
for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");





}

