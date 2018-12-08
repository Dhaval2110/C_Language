// WAP to delete a desired character in a given string.

#include<stdio.h>
main()
{
	int i,j;
	char s[200],ch;

	printf("Enter string : ");
	gets(s);

	printf("Enter character : ");
	scanf("%c",&ch);

	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
			s[j]=s[j+1];
			i--;
		}
	}

	printf("Result string is %s\n",s);

}
