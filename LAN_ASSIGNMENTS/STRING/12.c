// WAP to print the count of duplicate characters in a given string.

#include<stdio.h>
main()
{
	int i,j,c,k;
	char s[20];

	printf("Enter string : ");
	gets(s);

	for(i=0;s[i];i++)
	{
		for(j=i+1,c=1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				c++;
				for(k=j;s[k];k++)
				s[k]=s[k+1];
				j--;
			}
		}
		if(c>1)
		printf("%c is printed %d times\n",s[i],c);
	}
}
