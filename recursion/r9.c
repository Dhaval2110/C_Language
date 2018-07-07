#include<stdio.h>
char* find(char *,char ch);
main()
{
char s[10],p,ch='e';
printf("Enter the string\n");
scanf("%s",s);
printf("%u\n",s);
//printf("Enter the char\n");
//scanf("%c",&ch);
p=find(s,ch);
printf("Char is present in %s is %d\n",s,p);
}
char* find(char *p,char ch)
{

if(*p)
{
	if(*p==ch)
	return p;
	else
	return find((p+1),ch);
}
else
return 0;
}
