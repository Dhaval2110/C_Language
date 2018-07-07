#include<stdio.h>
main()
{
	int i,j;
	char s[200];

	printf("Enter a line : ");
	scanf("%[^\n]",s);

	for(i=0;s[i];i++)
	{
		if(s[i] == ' ' && s[i+1] == ' ')
		{
			for(j=i;s[j];j++)
				s[j]=s[j+1];
			i--;
		}
	}

	printf("Result line is : %s\n",s);

}
