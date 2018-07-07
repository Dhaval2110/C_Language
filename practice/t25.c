#include<stdio.h>
main()
{
int a[10],i,j,k,ele;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter the element of an array\n");
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

printf("Before\n");
for(i=0;i<ele;i++)
printf("%d",a[i]);

printf("\n--------------------------\n");

for(i=0,j=ele-1;i<j;i++,j--)
{
k=a[i];
a[i]=a[j];
a[j]=k;
}


printf("After\n");
for(i=0;i<ele;i++)
printf("%d",a[i]);
}
