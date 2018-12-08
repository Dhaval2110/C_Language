// Write a Program to implement grep command.( Check the command:  grep  searching_word  filename.c )

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char **argv)
{
	FILE *fp;
	char *p,ch;
	int c=0,i;

	if(argc != 3)
	{
		printf("Usage:./a.out Searching_word File_name");
		return;
	}

	fp = fopen(argv[2],"r");

	if(fp == 0)
	{
		printf("File not Found !!!\n");
		return;
	}

	while((ch = fgetc(fp)) != EOF)
		c++;

	p = malloc(c+1);

	rewind(fp);
	
	while(fgets(p,c+1,fp))
		if(strstr(p,argv[1]))
			printf("%s",p);
}
