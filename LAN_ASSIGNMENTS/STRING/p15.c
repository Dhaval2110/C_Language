// WAP to sort a given string in ascending order.

#include<stdio.h>
main()
{
	int i,j,t;
	char s[20];

	printf("Enter string : ");
	gets(s);

	for(i=0;s[i];i++)
	{	for(j=i+1;s[j];j++)
		{
			if(s[i]>s[j])
			{
				t = s[i];
				s[i] = s[j];
				s[j] = t;
			}
		}
	}
	printf("New string is : %s\n",s);
}
