#include<stdio.h>
void rev(char *p,char *q);
main()
{
	char s[50];
	printf("Enter\n");
	scanf("%s",s);
	rev(s,s+strlen(s)-1);
	printf("rev\n");
	printf("%s",s);
}
void rev(char *p,char *q)
{
	char t;
	if(p<q)
	{
		t=*p;
		*p=*q;
		*q=t;
		rev(p+1,q-1);
	}
}
