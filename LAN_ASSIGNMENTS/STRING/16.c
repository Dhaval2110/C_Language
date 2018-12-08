// WAP to accept two strings from user into two character array and copy one by one character into another destination array.

#include<stdio.h>
main()
{
	char s[20],s1[20],s2[40];
	int i,j;

	printf("Enter string 1 : ");
	gets(s);

	printf("Enter string 2 : ");
	gets(s1);

	for(i=0,j=0;s[i] && s1[i];i++)
	{
		s2[j]=s[i];
		j++;
		s2[j]=s1[i];
		j++;
	}

	if(s[i]=='\0')
		for(;s1[i];j++)
		{
			s2[j]=s1[i];
			i++;
		}

	else
	{
		for(;s[i];j++)
		{
			s2[j]=s[i];
			i++;
		}
	}

	s2[j]='\0';
	printf("New string is : %s\n",s2);
}
