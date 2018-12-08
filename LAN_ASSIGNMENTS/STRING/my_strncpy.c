#include<stdio.h>
void my_strncpy(char *,char *,int);
main()
{
	char a[50],b[50];
	int n;

	printf("Enter string : ");
	gets(a);

	printf("How many letter to copy ?\n");
	scanf("%d",&n);

	my_strncpy(a,b,n);

	printf("string b is : %s\n",b);
}

void my_strncpy(char *p,char *q,int n)
{
	int i;
	for(i=0;i<n;q[i++]=p[i]);
	q[i]='\0';
}
