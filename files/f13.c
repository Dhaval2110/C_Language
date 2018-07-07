#include<stdio.h>
main()
{
	int i=100;
	FILE *fp;
	fp=fopen("data","w");
	printf("%d",i);
	fprintf(fp,"%d",i);
}
