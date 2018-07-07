#include<stdio.h>
main()
{
int a[5]={10,20,30},i,ele;
ele=sizeof(a)/sizeof(a[0]);
for(i=0;i<ele;i++)

printf("%d\n",a[i]);
printf("\n");
}

