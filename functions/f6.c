#include<stdio.h>
int evod(int *,int);
main()
{
int a[5],i,ele,c,res;
printf("Enter the number of elements\n");
ele=sizeof(a)/sizeof(a[0]);
res=evod(a,ele);
printf("Even are=%d\n",res);
printf("\n");
}
int evod(int *p,int n)
{
int i,c=0,j;
for(i=0;i<n;i++)
scanf("%d",&p[i]);
for(i=0;i<n;i++)
printf("%d ",p[i]);

for(i=0;i<n;i++)
if(p[i]%2==0)

c=c++;


return c;
}
