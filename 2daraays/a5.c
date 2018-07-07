#include<stdio.h>
main()
{
int i=10,j=20,k=30;
int *p[3];
p[0]=&i;
p[1]=&j;
p[2]=&k;

printf("%d\n",sizeof(p));
printf("%d\n",sizeof(p[0]));

printf("%d %d %d\n",*p[0],*p[1],*p[2]);
printf("%d %d %d\n",p[0][0],p[1][0],p[2][0]);
}
