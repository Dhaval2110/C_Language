#include<stdio.h>
main()
{
int i=10,j,*p;
p=&i;
printf("i=%u j=%u p=%u\n",i,j,p);
//1.j=*p++;
//2.j=*++p;
//3.j=++*p;
//4.j=(*p)++;
//5.j=++(*p);
//6.p++;
++p;
printf("i=%u j=%u p=%u\n",i,j,p);
}
