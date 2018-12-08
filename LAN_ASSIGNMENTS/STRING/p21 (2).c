// WAP to read two strings through the keyboard and replace any word of the second string with the first string.

#include<stdio.h>
main()
{
	char s[200],b[20],c[20],d[200],*p;
	int i,j,k,b1;

	printf("Write a line : ");
	scanf("%[^\n]",s);

	printf("Enter a word you want to replace : ");
	scanf("%s",b);

	printf("Enter a new word : ");
	scanf("%s",c);

	p = strstr(s,b);
	b1 = strlen(b);

	for(i=0,j=0;s+i!=p;i++,j++)
		d[j]=s[i];

	for(k=0;c[k];k++,j++)
		d[j]=c[k];

	for(i=i+b1;s[i];i++,j++)
		d[j]=s[i];

	d[j]='\0';
	printf("Result is : %s\n",d);
}
