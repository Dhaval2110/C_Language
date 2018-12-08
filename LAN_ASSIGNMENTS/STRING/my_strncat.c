#include<stdio.h>
void my_strcat(char *,char *,int);
main()
{
	char a[50],b[50];
	int n;

	printf("Enter string 1 : ");
	gets(a);

	printf("Enter string 2 : ");
	gets(b);

	printf("Enter no of character : ");
	scanf("%d",&n);

	my_strcat(a,b,n);

	printf("Now string 1 is : %s\n",a);
}
void my_strcat(char *p,char *q,int n)
{
	int i,j;
	for(i=0;p[i];i++);
	p[i]=' ';
	i++;
	for(j=0;j<n;i++,j++)
	p[i]=q[j];
	p[i]='\0';
}
