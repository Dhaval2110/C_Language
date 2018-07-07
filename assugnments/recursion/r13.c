#include<stdio.h>
char * sc(char *p,char ch);
main()
{
	char s[100],ch,*p;
	printf("String\n");
	gets(s);
	printf("Char \n");
	scanf("%c",&ch);
	p=sc(s,ch);
	if(p==0)
		printf("Not fond");
	else
		printf("%c at %u\n",*p,p);
}
char *sc(char *p,char ch)
{
	if(*p)
	{
		if(*p==ch)
			return p;
		else 
			sc(p+1,ch);
	}
	else
		return 0;
}
