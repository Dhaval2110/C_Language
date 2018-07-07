
#include<stdio.h>
main()
{
	int i,j,c,k;
	char s[20];

	printf("Enter string : ");
	gets(s);

	for(i=0;s[i];i++)
	{
	if(s[i]>='a' && s[i]<='z')
	s[i]=s[i]-32;
	else	
	s[i]=s[i]+32;
	
	}
	
	printf("S=%s\n",s);
}
