// WAP to delete conjuctive spaces in given string.

#include<stdio.h>
main()
{
	char s[50];
	int i,j,k;

	printf("Enter string : ");
	gets(s);

	for(i=0;s[i];i++)
	{
		if(s[i]==' ' && s[i+1]==' ')
		{
			for(j=i;s[j];j++)
			s[j] = s[j+1];
		i--;
		}
	}
	printf("New string is : %s\n",s);

}
