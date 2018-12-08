// WAP of one line code to copy the string into another buffer.

#include<stdio.h>
main()
{
	int i;
	char s[20],s1[20];

	printf("Enter string : ");
	gets(s);

	for(i=0;s1[i]=s[i];i++);

	printf("New string is : ");
	puts(s1);

//	printf("\n");
}
