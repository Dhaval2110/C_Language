#include<stdio.h>
print(char *);
main()
{
char s[]="Genius";
print(s);
}
print(char *s)
{
if(*s)
print(++s);
printf("%c",*s);
}

