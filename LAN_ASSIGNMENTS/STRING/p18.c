// WAP to reverse the words in a given string line.

#include<stdio.h>
main()
{
	char s[20];
	int i,j,k,t;

	printf("Enter string : ");
	gets(s);

	for(i=0;s[i];i++)
	{
		j=i;
		for(;s[i]>='A'&&s[i]<='z' || s[i]>='0'&&s[i]<='9';i++);

		for(k=i-1;k>j;k--,j++)
		{
			t = s[k];
			s[k] = s[j];
			s[j] = t;
		}
	}

	printf("Result is : %s\n",s);
}
