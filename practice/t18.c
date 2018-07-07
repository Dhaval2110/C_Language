#include<stdio.h>
main()
{

int i,j,k,m;
char ch;
printf("Enter the number of rows..\n");
scanf("%d",&i);

for(;i;i--)
{

ch=65+i;
for(j=0;j<=i;j++)

if(j>=0)
printf("%c ",ch--);
else
printf(" ");

//for(k=i;k>=0;k--)
printf("\n");
}
}
