#include<stdio.h>
void array(int *,int);
main()
{
int a[5]={10,20,30,40,50},i,ele;
ele=sizeof(a)/sizeof(a[0]);

for(i=0;i<ele;i++)
printf("%d* ",a[i]);
array(a,ele);
}
void array(int *p,int n)
{
int i;
printf("\n");
//for(i=0;i<n;i++)
//scanf("%d",p);
for(i=0;i<n;i++)
printf("%d ",p[i]);

printf("\n");
}
