#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p;
	p=malloc(sizeof(int));
	printf("Enter the data...\n");
	scanf("%d",p);
	printf("data=%d\n",*p);
}
