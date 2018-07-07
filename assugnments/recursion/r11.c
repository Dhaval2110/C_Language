#include<stdio.h>
int strl(const char *p);
main()
{
char s[50];
int i;
printf("Enter the string\n");
scanf("%s",s);
i=strl(s);
printf("length =%d\n",i);
}
int strl(const char *p)
{
if(*p)
return 1+strl(p+1);
else
return 0;
}
