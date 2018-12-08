// WAP to reverse the string using loops & recursion.

#include<stdio.h>
main()
{
	int i,j,t;
	char s[20];

	printf("Enter string : ");
	gets(s);

	for(i=0;s[i];i++);

	for(j=i-1,i=0;i<j;i++,j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}

	printf("Reverse string is : ");
	for(i=0;s[i];i++)
		printf("%c",s[i]);

	s[i] = '\0';
	printf("\n");
}
