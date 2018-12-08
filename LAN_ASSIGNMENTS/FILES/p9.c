// Write a Program to reverse the Contents of a given file.

#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	int i,size=0;
	char *p,ch;

	if(argc != 2)
	{
		printf("Usage:./a.out File_name\n");
		return;
	}

	fp = fopen(argv[1],"r");

	if(fp == 0)
	{
		printf("File not found !!!\n");
		return;
	}

	while((ch=fgetc(fp))!=EOF)
	{
		size++;
	}
	
	p = malloc(size);
	
	rewind(fp);
	for(i=0;i<size;i++)
	{
		p[i] = fgetc(fp);
	}

	fp = fopen(argv[1],"r+");
	for(i=size-2;i>=0;i--)
	{
		fputc(p[i],fp);
	}
}
