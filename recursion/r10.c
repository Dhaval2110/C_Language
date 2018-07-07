#include<stdio.h>
char find(char *,char ch);
main()
{
	char s[10],ch='l';
	char p;
	printf("Enter the string\n");
	scanf("%s",s);
//	printf("%u\n",s);
	//printf("Enter the char\n");
	//scanf("%c",&ch);
	p=find(s,ch);
	printf("Char is present %c\n",p);
}
char find(char *p,char ch)
{
	char c=0;
	if(*p)
	{
		if(*p==ch)
		{
			c++;	
			return p;
		}
		else
			return find((p+1),ch);

		//return c;
	}
	else
	return c;

}
