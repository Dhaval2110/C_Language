// WAP to find the no.of words are presented in a given string line.

#include<stdio.h>
main()
{
	char s[200];
	int i,j=1;

	printf("Enter a line : ");
	gets(s);

	for(i=0;s[i];i++);

	for(i=0;s[i];i++)
	{
		if(s[i] == ' ')
		{	j++;
			if(s[i+1]==' ')
			j--;
		}
	}

	printf("Number of words are %d\n",j);
}
