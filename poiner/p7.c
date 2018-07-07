#include<stdio.h>
main()
{
int i=10,*p;
char ch='a',*cp;
p=&i;
cp=&ch;
printf("%d %d\n",sizeof(p),sizeof(*p));
printf("%d %d\n",sizeof(cp),sizeof(*cp));
}
