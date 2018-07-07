#include<stdio.h>
main()
{
int a[8],i,j,k,l;
printf("Entert the elements\n");
for(i=0;i<8;i++)
scanf("%d",&a[i]);

printf("Before\n");
for(i=0;i<8;i++)
printf("%d ",a[i]);
printf("\n");

printf("Enter the element you want to delet\n");
scanf("%d",&k);
for(i=k-1;i<7;i++)
a[i]=a[i+1];


printf("After\n");
for(i=0;i<7;i++)
printf("%d ",a[i]);
printf("\n");
}
