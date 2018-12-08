// WAP to find the no.of times the character is found in a given string.

#include<stdio.h>
main()
{
	int i,c=0;
	char s[20],ch;

	printf("Enter string : ");
	gets(s);

	printf("Enter character : ");
	scanf("%c",&ch);

	for(i=0;s[i];i++)
		if(s[i] == ch)
			c++;

	printf("Entered character is %d times in string\n",c);
}
