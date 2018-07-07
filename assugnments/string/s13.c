// WAP to print the count of duplicate characters in a given string.

#include<stdio.h>
main()
{
	int i,j=0,c=0,k=0,l=0;
	char s[20];

	printf("Enter string : ");
	gets(s);

	for(i=0;s[i];i++)
	{
	if(s[i]>='a'  && s[i]<='z')
	j++;
	else if(s[i]>='A' && s[i]<='Z')
	k++;
	else if(s[i]>='0' && s[i]<='9')
	l++;
	else
	c++;
	}
	
printf("%d %d %d %d\n",j,k,l,c);
}
