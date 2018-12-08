// WAP to find the no.of words are presented in a given string line.

#include<stdio.h>
main()
{
	char s[200];
	int i,j=0;

	printf("Enter a line : ");
	gets(s);

//	for(i=0;s[i];i++);

	for(i=0;s[i];i++)
	{
		if((s[i]!=' '&&s[i+1]==' ') || (s[i]!=' '&&s[i+1]=='\0'))
			j++;
	}

	printf("Number of words are %d\n",j);
}
