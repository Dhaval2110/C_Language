#include<stdio.h>
void revr(char *);
main()
{
	char s[10],i;
	printf("Enter the string\n");
	scanf("%s",s);

	revr(s);
//	for(i=0;s[i];i++)
//		printf("%c",s[i]);
printf("%s",s);
	printf("\n");
}
void revr(char *p)
{
	int t,k,i,j;
	for(i=0;p[i];i++);
	for(k=i-1,j=0;k>=j;k--,j++)
	{	t=p[k];
		p[k]=p[j];
		p[j]=t;
	}
}
