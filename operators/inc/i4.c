#include<stdio.h>
main()
{
int i=10,j=20;
//int i,j;
//printf("i and j\n");
//scanf("%d %d",&i,&j);
i=i++ + ++j;
printf("%d %d %d %d %d\n",i++,i++,++i,i,++i);
}

