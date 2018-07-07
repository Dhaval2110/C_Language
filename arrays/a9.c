#include<stdio.h>
main()
{
int i,j,c,ele,a[5];
printf("Enter the data\n");
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

for(i=0,c=0;i<ele;i++)
{
for(j=2;j<a[i];j++)
if(a[i]%j==0)
break;
if(a[i]==j)
{
c=c++;

printf("Prime Numbers are :%d \n",a[i]);
}
}
printf("Prime Nums=%d\n",c);

}
