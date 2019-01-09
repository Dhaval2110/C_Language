#include<stdio.h>
#include<stdlib.h>
//1. Using Pointers
main()
{
int i=10;
char *p=&i;
if(*p==10)
printf("Little Endian");
else
printf("Big Endian");
}
//2. Using Unions
union u
{
int i;
char ch;
}
main()
{
union u u1;
u1.i=10;
if(u1.ch==10)
printf("Little Endian");
else
printf("Big Endian");
}
