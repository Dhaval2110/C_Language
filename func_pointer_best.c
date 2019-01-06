#include<stdio.h>
void fun(int a,int b)
{
int c;
c=a+b;
printf("%d\n",c);
}
void main()
{
int a=10;
int b=20;
void (*fn)(int,int)=&fun;
fun(a,b);
}