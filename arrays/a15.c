#include<stdio.h>
main()
{
int a[5],i,j,ele,temp,k;
printf("enter the elements\n");
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
scanf("%d",&a[i]);


for(i=0;i<ele;i++)
printf("%d ",a[i]);
printf("\n");

for(i=0;i<ele;i++)
{
for(j=i+1;j<ele;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
} 
}
}

for(i=0;i<ele;i++)
printf(" %d ",a[i]);

printf("\n");



}
