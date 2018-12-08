// Write a Program to replace the word with the reverse of that word in a given file.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *fp;
	int length=0,i,j;
	char ch,p[20]={'\0'},t;

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

	fp = fopen(argv[1],"r+");

	while(fscanf(fp,"%s",p)!=EOF)
	{
		length = strlen(p);

		for(j=0;p[j];j++);

		for(i=0,j=j-1;i<j;i++,j--)
		{
			t = p[i];
			p[i] = p[j];
			p[j] = t;
		}
		ch = fgetc(fp);
		fseek(fp,-(length+1),SEEK_CUR);
		fprintf(fp,"%s",p);
		fputc(ch,fp);
		p[20]='\0';
	}
}
