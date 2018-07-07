#include<stdio.h>
main()
{
	char s[100],s1[100],s2[100],i,j,k,l,c;
	printf("Enter the strings:\n");
	gets(s);
	gets(s1);

	for(i=0,j=0;s[i]&&s1[i];i++)
	{
		s2[j]=s[i];
		j++;
		s2[j]=s1[i];
		j++;
	}

	if(s[i]=='\0')
		for(;s1[i];j++)
		{
			s2[j]=s1[i];
			i++;
		}
	else
		for(;s[i];j++)
		{
			s2[j]=s[i];
			i++;
		}

	s2[j]='\0';
	printf("String is %s\n",s2);
}
