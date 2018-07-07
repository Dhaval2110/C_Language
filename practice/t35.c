#include<stdio.h>
main()
{
	char s[100],i,j,k,l;
	printf("Enter the string\n");
	scanf("%[^\n]",s);

	printf("Before s=%s\n",s);

	for(i=0;;i++)
	{
		if(s[i]==32 || s[i]=='\0')
		{
			for(j=i-1,k=0;k<j;j--,k++)
			{
				l=s[j];
				s[j]=s[k];
				s[k]=l;
			}
		k=i+1;
		}
	if(s[i]=='\0')
	break;
	}
	
	printf("After s=%s\n",s);
}
