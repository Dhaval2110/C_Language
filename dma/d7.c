#include<stdio.h>
#include<stdlib.h>
main()
{
	char **p,i,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	p=malloc(sizeof(char *)*n);
	for(i=0;i<n;i++)
		p[i]=malloc(10);
	printf("Enter the string\n");
	
	for(i=0;i<n;i++)
		scanf("%s",p[i]);
	for(i=0;i<n;i++)
		printf("%s\n",p[i]);
}
