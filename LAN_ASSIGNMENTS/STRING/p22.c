// WAP to check that given strings are anagram or not...

#include<stdio.h>
void rm_char(char *);
void str_sort(char *);
void my_strcmp(char *,char *);

int i,j,k,e,e1;

main()
{
	char a[20],b[20],*p;

	printf("Enter string 1 : ");
	scanf("%s",a);

	printf("Enter string 2 : ");
	scanf("%s",b);

	for(e=0;a[e];e++);
	for(e1=0;b[e1];e1++);

	rm_char(a);
	rm_char(b);

	str_sort(a);
	printf("%s\n",a);
	str_sort(b);
	printf("%s\n",b);

	my_strcmp(a,b);
}

void rm_char(char *p)
{
	for(i=0;p[i];i++)
	{
		if(p[i]<='A'||p[i]>='z')
		{
			for(k=i;p[k];k++)
				p[k]=p[k+1];
			i--;
		}
	}
}

void str_sort(char *p)
{
	char t;

	for(i=0;p[i];i++)	
	{
		for(j=i+1;p[j];j++)
		{
			if(p[i]>p[j])
			{
				t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}
}

void my_strcmp(char *p,char *q)
{
	int l1,l2,c=0;

	for(l1=0;p[l1];l1++);
	for(l2=0;q[l2];l2++);

	if(l1 == l2)
	{
		for(i=0;p[i];i++)
			if(p[i]!=q[i])
			c++;
		if(c == 0)
			printf("Both are anagram\n");
		else
			printf("Both are not anagram\n");
	}
	else
		printf("Both are not anagram\n");
}
