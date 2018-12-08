#include<stdio.h>
char * my_strstr(char *,char *);
main()
{
	char a[20],b[20],*p;

	printf("Enter main string : ");
	gets(a);

	printf("Enter substring : ");
	gets(b);

	printf("%u\n",a);

	p=my_strstr(a,b);

	if(p==0)
		printf("not found\n");
	else
		printf("%s found at %u\n",b,p);
}

char * my_strstr(char *p,char *q)
{
	int i,j=0;
	char *t=0;
	for(i=0;p[i];i++)
	{
		if(p[i]==q[j])
			t=p+i;
		for(j=0;p[i]==q[j];)
		{
			i++;
			j++;
			if(q[j]=='\0')
			{
				return t;
			}
		}

	}

	return t;
}
