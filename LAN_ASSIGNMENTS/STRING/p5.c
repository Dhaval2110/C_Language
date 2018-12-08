// WAP to compare two strings without using strcmp function.

#include<stdio.h>
main()
{
	char s[20],s1[20];
	int i,j,c=0;

	printf("Enter string 1 : ");
	gets(s);

	printf("Enter string 2 : ");
	gets(s1);

	for(i=0;s[i];i++);
	for(j=0;s[j];j++);

	if(i==j)
		for(i=0;s[i];i++)
			if(s[i]!=s1[i])
				c++;
		if(c==0)
		printf("Both are equal\n");
	else
		printf("Not equal\n");
}
