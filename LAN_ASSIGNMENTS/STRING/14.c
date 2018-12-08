// WAP to convert the characters Upper to Lower and Lower to Upper in a given string.

#include<stdio.h>
main()
{
	int i,j;
	char s[50];

	printf("Enter a line : ");
	gets(s);

	for(i=0;s[i];i++)
	{
		if(s[i]>='a' && s[i]<='z')
			s[i] = s[i]-32;

		else if(s[i]>='A' && s[i]<='Z')
			s[i] = s[i]+32;
	}

	printf("Resultant line : %s\n",s);
}
