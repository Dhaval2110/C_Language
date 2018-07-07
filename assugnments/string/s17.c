// WAP to find the no.of times substring is found in a given string.

/*#include<stdio.h>
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
}*/


#include<stdio.h>
char *str(const char *,const char *);
main()
{
	char a[200],b[10],*p;
	int i,j,c=0;

	printf("Enter Main srting a : ");
	gets(a);

	printf("Enter the sunstring b: ");
	gets(b);

	p=str(a,b);
	if(p==0)
	printf("string not found\n");
	else
	print("string found %s %u\n",p,p);
}

char * str(const char *p,const char *q)
{
char i,j;
for(i=0;p[i];i++)
{
if(p[i]==q[0])
{
for(j=i;q[j];j++)
if(q[j]!=p[i+j])
break;
if(q[j]=='\0')
return p+i;
}
}
return 0;
}

