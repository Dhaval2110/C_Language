#include<stdio.h>
int strl(char *p);
main()
{
char s[100],i,j;
printf("Enter the string\n");
scanf("%[^\n]",s);
i=strl(s);
printf("String lengh is %d\n",i);
}
int strl(char *p)
{
if(*p)
return 1+strl(p+1);
else
return 0;
}
