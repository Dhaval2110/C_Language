
#include<stdio.h>
main()
{
	int i,c=0;
	char s[20],ch;

	printf("Enter string : ");
	scanf("%s",s);
	
	for(i=0;s[i];i++)
	if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'||s[i]=='u')
	printf("%c\n",s[i]);
}
