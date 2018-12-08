// WAP to find the no.of times substring is found in a given string.

#include<stdio.h>
main()
{
	char a[200],b[10];
	int i,j,c=0;

	printf("Enter Main srting a : ");
	gets(a);

	printf("Enter Sub-string string b : ");
	gets(b);

	for(i=0;a[i];i++)
		for(j=0;a[i]==b[j];)
		{
			j++;
			i++;
			if(b[j]=='\0')				
			{
				c++;
				break;
			}
		}

	printf("Substring is %d times found in main string\n",c);
}
