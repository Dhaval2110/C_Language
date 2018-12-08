// WAP to find  string length using pointer.

#include<stdio.h>
main()
{
	char s[20],*p;
	int i;

	printf("Enter string : ");
	gets(s);

	p = s;

	for(i=0;p[i];i++);
	printf("Length of string is %d\n",i);

}
