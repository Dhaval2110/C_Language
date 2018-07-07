#include<stdio.h>
main()
{
int i,j,k;
for(i=0;i<3;i++)
{
for(j=0;j<i;j++)
printf(" ");
for(k=3;k>i;k--)
printf("* ");

printf("\n");
}
for(i=0;i<2;i++)
{
for(j=1;j>i;j--)
printf(" ");
for(k=3;k>=1;k--)
printf("* ");
printf("\n");
}

}

