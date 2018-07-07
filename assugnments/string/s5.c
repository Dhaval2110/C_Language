
#include<stdio.h>
main()
{
	int j,c=0;
	char s[20],s1[20];

	printf("Enter string1 : ");
	scanf("%s",s);

	printf("Enter string 2\n");
	scanf("%s",s1);

	for(j=0;s[j];j++)
		if(s[j]!=s1[j])
			break;
	if(s[j]==s1[j])
		printf("Same\n");
	else
		printf("Not\n");
}

