#include<stdio.h>
char *str(char *,char *);
main()
{
	char m[100],s[100],*p;
	printf("Enter the main\n");
	scanf("%[^\n]",m);
	printf("Enter the sub\n");
	gets(s);
	p=str(m,s);
	if(p==0)
		printf("not found\n");
	else
		printf("found %s at %u\n",p,p);
}
char *str(char *m,char *s)
{
	char i,j;
	for(i=0;m[i];i++)
		if(m[i]==s[0])
		{
			for(j=1;s[j];j++)
			{if(s[j]!=m[i+j])
				break;
				if(s[j]=='\0')
					return m+i;
			}
		}

			return 0;
}
