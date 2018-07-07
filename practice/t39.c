#include<stdio.h>
char *sc(const char*p,char ch);
main()
{
	char s[100],ch,*p;
	printf("Enter the string\n");
	gets(s);
	//scanf("%s",s);
	printf("Enter the char\n");
	scanf("%c",&ch);
	p=sc(s,ch);

	if(p==0)
		printf("Char no found\n");
	else
		printf("Found %c at %d\n",*p,p);
}
char *sc(const char *p,char ch)
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


