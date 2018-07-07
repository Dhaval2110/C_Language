#include<stdio.h>
main()
{
char s[10]="hello";
char *p=s,i=0;
while(*p!=0)
{i++;
p++;
}
printf("%d",i);
}
