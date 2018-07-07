#include<stdio.h>
main()
{
int a[5],ele,i,j,big;

printf("Enter the data\n");
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)
scanf("%d",&a[i]);


for(i=0;i<ele;i++)
printf("%d ",a[i]);

big=a[0];
j=0;


for(i=0;i<ele;i++)
if(a[i]>big)
{big=a[i];
j=i;
}
printf("Biggest =%d\n",big);
printf("a[%d]\n",j);
}
