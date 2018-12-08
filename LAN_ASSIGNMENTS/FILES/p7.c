// Write a Program to copy the one file into multiple destination files which are provided during the loadtime.

#include<stdio.h>

main(int argc,char **argv)
{
	FILE *fp,*fd;
	int i;
	char ch;

	if(argc < 2)
	{
		printf("Usage:./a.out File_name ...\n");
		return;
	}

	fp = fopen(argv[1],"r");

	if(fp == 0)
	{
		printf("File is not found !!!\n");
		return;
	}

	for(i=2;i<argc;i++)
	{
		fd = fopen(argv[i],"w");

		while((ch=fgetc(fp))!=EOF)
			fputc(ch,fd);

		rewind(fp);
	}
}
