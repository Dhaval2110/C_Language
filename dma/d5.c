#include<stdio.h>
#include<stdlib.h>
main()
{
	char *p[5],i;
	for(i=0;i<5;i++)
		p[i]=malloc(10);
	printf("Enter the string\n");
	for(i=0;i<5;i++)
		scanf("%s",p[i]);
	printf("\n--------------\n");
	for(i=0;i<5;i++)
		printf("%s\n",p[i]);
}
