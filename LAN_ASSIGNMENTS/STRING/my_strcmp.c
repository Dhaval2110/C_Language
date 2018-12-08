#include<stdio.h>
int my_strcmp(char *,char *);
main()
{
	char a[20],b[20];
	int c;

	printf("Enter string a : ");
	gets(a);

	printf("Enter string b : ");
	gets(b);

	c = my_strcmp(a,b);

	if(c==0)
		printf("same\n");
	else if(c>0)
		printf("a is big\n");
	else
		printf("b is big\n");
}
int my_strcmp(char *p,char *q)
{
	int i,j;
	for(i=0;p[i];i++);
	for(j=0;q[j];j++);

	if(i==j)
	{
		for(i=0;p[i];i++)
			if(p[i]!=q[i])
			break;
		
		if(p[i]==q[i])
			return 0;
	
		else if(p[i]>q[i])
			return 1;

		else
			return -1;
	}
	else if(i>j)
		return 1;

	else
		return -1;
}
