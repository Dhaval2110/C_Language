#include<stdio.h>
void my_strcpy(char *,char *);
main()
{
	char a[50],b[50];

	printf("Enter string : ");
	gets(a);

	my_strcpy(a,b);

	printf("string b is : %s\n",b);
}

void my_strcpy(char *p,char *q)
{
	while(*q++ = *p++);
}
