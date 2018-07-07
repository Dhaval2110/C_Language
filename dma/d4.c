#include<stdio.h>
#include<stdlib.h>
main()
{
	char *p;
	p=malloc(10);
	printf("Enter the string\n");
	scanf("%[^\n]",p);
	printf("Data =%s\n",p);
}
