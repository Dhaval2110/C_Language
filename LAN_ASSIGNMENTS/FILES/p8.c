// Write a Program to replace the perticular word with another word ( can be any length ) in a given file.

#include<stdio.h>

main(int argc,char **argv)
{
	FILE *fp,*fd;
	int i;
	char ch,c[50]={'\0'};

	if(argc != 4)
	{
		printf("Usage:./a.out File_name old_word new_word\n");
		return;
	}

	fp = fopen(argv[1],"r");
	fd = fopen("output","w");

	if(fp == 0)
	{
		printf("File is not found !!!\n");
		return;
	}

	while((fscanf(fp,"%s",c))!=EOF)
	{
		ch = fgetc(fp);
		if((strcmp(c,argv[2]))==0)
		{
			fprintf(fd,"%s",argv[3]);
		}
		else
		{
			fprintf(fd,"%s",c);
		}
		fputc(ch,fd);
	}
}
