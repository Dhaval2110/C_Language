#include<stdio.h>
void stc(char *p,char *q);
main()
{
char s[100],d[100],i;
printf("Enter source\n");
scanf("%s",s);
stc(s,d);
printf("string %s\n",d);
}
void stc(char *p,char*q)
{
char t;
if(*p)
{
*q=*p;
stc(p+1,q+1);
}
else
*q='\0';
}
