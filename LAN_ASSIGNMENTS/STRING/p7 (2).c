// WAP to check the given strings are palindrom or not.

#include<stdio.h>
main()
{
	int i,j,c=0;
	char s[20],s1[20];

	printf("Enter string 1 : ");
	gets(s);

	for(i=0;s[i];i++);

	for(j=i-1,i=0;s[i];i++,j--)
		s1[i] = s[j];

	s1[i] = s[i];	

	for(i=0;s[i];i++);
	for(j=0;s1[j];j++);

	for(i=0;s[i];i++)
		if(s[i] != s1[i])
			c++;
	if(c == 0)
		printf("given string is palindrome\n");
	else
		printf("Given string is not palindrome\n");

}
