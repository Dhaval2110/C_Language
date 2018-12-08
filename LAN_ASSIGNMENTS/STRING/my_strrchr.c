#include<stdio.h>
char * my_strchr(char *,char);
main()
{
	char s[20],ch,*p;
	
	printf("Enter string : ");
	gets(s);

	printf("Enter character : ");
	scanf(" %c",&ch);

	p = my_strchr(s,ch);

	printf("%u\n",s);

	if(p==0)
		printf("Not found\n");
	else
		printf("%c is found at %u\n",ch,p);
}
char * my_strchr(char *p,char ch)
{
	int i;
	char *q=0;
	for(i=0;p[i];i++)
	{
		if(p[i]==ch)
			q=p+i;
	}
		return q;
}
