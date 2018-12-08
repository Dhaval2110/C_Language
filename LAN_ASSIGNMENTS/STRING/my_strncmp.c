#include<stdio.h>
int my_strncmp(char *,char *,int);
main()
{
	char a[20],b[20];
	int c,n;

	printf("Enter string a : ");
	gets(a);

	printf("Enter string b : ");
	gets(b);

	printf("How much alphabets ?\n");
	scanf("%d",&n);

	c = my_strncmp(a,b,n);

	if(c==0)
		printf("same\n");
	else if(c>0)
		printf("a is big\n");
	else
		printf("b is big\n");
}
int my_strncmp(char *p,char *q,int n)
{
	int i,j;
	for(i=0;i<n && p[i];i++);
	for(j=0;j<n && p[j];j++);

	if(i==j)
	{
		for(i=0;i<n-1 && p[i];i++)
			if(p[i]!=q[i])
			break;
		
		printf("a=%c\nb=%c\n",p[i],q[i]);

		if(p[i]==q[i])
			return 0;
	
		else if(p[i]>q[i])
			return 1;

		else
			return -1;
	}
	else if(p[i])
		return 1;

	else
		return -1;
}
