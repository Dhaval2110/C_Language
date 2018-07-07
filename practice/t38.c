#include<stdio.h>
void scp(char *p,char *q);
main()
{
char s[100],d[100],i,j,k,l;
printf("Enter the string\n");
scanf("%[^\n]",s);

scp(s,d);

printf("Source =%s , destination=%s\n",s,d);
}
void scp(char *p,char *q)
{
if(*p)
{
*q=*p;
scp(p+1,q+1);
}
else
*q='\0';
}
