// Write a Program to Capitalize First Letter of every Word in a file.

#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch;

	if(argc!=2)
	{
		printf("Usage:./a.out File_name\n");
		return;
	}

	fp = fopen(argv[1],"r");

	if(fp == 0)
	{
		printf("File is not found !!!\n");
		return;
	}

	else
	{
		fp = fopen(argv[1],"r+");

		ch = fgetc(fp);
		if(ch>='a' && ch<='z')
		{
			ch = ch-32;
			fseek(fp,-1,SEEK_CUR);
			fputc(ch,fp);
		}

		while((ch=fgetc(fp))!=EOF)
		{
			if(ch == '\n')
			{
				ch = fgetc(fp);
				if(ch>='a' && ch<='z')
				{
					ch = ch-32;
					fseek(fp,-1,SEEK_CUR);
					fputc(ch,fp);
				}
			}
			if(ch==' ')
			{
				ch = fgetc(fp);
				if(ch>='a' && ch<='z')
				ch = ch-32;
				fseek(fp,-1,SEEK_CUR);
				fputc(ch,fp);
			}
		}
	}
}
