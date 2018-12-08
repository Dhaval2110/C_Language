#include<stdio.h>
void my_strcat(char *,char *);
main()
{
	char a[50],b[50];

	printf("Enter string 1 : ");
	gets(a);

	printf("Enter string 2 : ");
	gets(b);

	my_strcat(a,b);

	printf("Now string 1 is : %s\n",a);
}
void my_strcat(char *p,char *q)
{
	int i,j;
	for(i=0;p[i];i++);
	p[i]=' ';
	i++;
	for(j=0;p[i]=q[j];i++,j++);
}
