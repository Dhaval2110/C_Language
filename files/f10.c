#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	char *p;
	int c=0;
	FILE *fp;
	if(argc!=3)
	{
		printf("Usage:./a.out string fname...\n");
		return;
	}
	fp=fopen(argv[2],"r");
	if(fp==0)
	{
		printf("File is not present\n");
		return;
	}
	while(fgetc(fp)!=EOF)
		c++;
	rewind(fp);
	p=malloc(c+1);
	while(fgets(p,c,fp))
		if(strstr(p,argv[1]))
			printf("%s",p);
}
