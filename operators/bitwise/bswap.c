#include<stdio.h>
main()
{
int i,j;
printf("enter the numbers...\n");
scanf("%d %d",&i,&j);
printf("berofe swaping i=%d j=%d\n",i,j);
/*j=i^j;
i=i^j;
j=i^j;*/
i=i^j;
j=i^j;
i=i^j;
printf("after swapping i=%d j=%d\n",i,j);
}

