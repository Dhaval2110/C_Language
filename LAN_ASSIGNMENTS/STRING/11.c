// WAP to delete the duplicate characters in a given string.

# include<stdio.h>
main()
{
	int i,j,k;
	char s[20];

	printf("Enter string : ");
	gets(s);

	for(k=0;s[k];k++);

	for(i=0;s[i];i++)
		for(j=i+1;s[j];j++)
			if(s[i] == s[j])
			{
				for(k=j;s[k];k++)
				s[k] = s[k+1];
				j--;
			}

	printf("New string is : %s\n",s);
}
