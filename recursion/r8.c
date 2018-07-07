#include<stdio.h>
void strin(char *,char *);
main()
{
char s[10],d[10],i,j;
printf("Enter the string\n");
scanf("%s",s);
strin(s,d);
printf("d=%s\ts=%s\n",d,s);
}
void strin(char *p,char *q)
{
if(*p)
{
*q=*p;
strin(p+1,q+1);
}
else
*q=*p;
}
