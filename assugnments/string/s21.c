#include<stdio.h>
main()
{
	char a[200],b[20],c[20];
	int i,j,k;

	printf("Write a line : ");
	scanf("%[^\n]",a);

	printf("Enter a word you want to replace : ");
	gets(b);

	printf("Enter a new word : ");
	gets(c);

	for(i=0;a[i];i++)
	{
		for(j=0;b[j]==a[i]&&b[j]!='\0';)
	//	if(b[j]!=' ')
		j++;
		i++;

	}
}
