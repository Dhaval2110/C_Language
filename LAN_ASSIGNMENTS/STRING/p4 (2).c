// WAP to find vowels in a given string.

#include<stdio.h>
main()
{
	int i;
	char s[20];

	printf("Enter string : ");
	gets(s);

	for(i=0;s[i];i++)
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			printf("%c",s[i]);

	printf("\n");
}
