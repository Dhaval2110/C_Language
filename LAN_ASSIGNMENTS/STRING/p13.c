// WAP to find count of  Lower characters, Upper characters, Special characters and digits occured in a given string.

#include<stdio.h>
main()
{
	int i,l=0,u=0,s=0,d=0;
	char S[200];

	printf("Enter string : ");
	gets(S);

	for(i=0;S[i];i++)
	{
		if(S[i]>='0' && S[i]<='9')
			d++;
		else if(S[i]>='a' && S[i]<='z')
			l++;
		else if(S[i]>='A' && S[i]<='Z')
			u++;
		else
			s++;
	}

	printf("In given string\nLower : %d\nUpper : %d\nSpecial : %d\ndigits : %d\n",l,u,s,d);
}
