// Write a Program to implement sort command.(Check the command:  sort  filename.c )

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char **argv)
{
	FILE *fp,*fd;
	char **p,*temp,ch;
	int line=0,length=0,c=0,i,j;

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
		c++;
		if(ch=='\n')
		{
			line++;
			if(length<c)
				length = c;
			c = 0;
		}
	}

	printf("Total line is : %d\n",line);
	printf("max. length is : %d\n",length);

	p = malloc(sizeof(char *)*line);
	for(i=0;i<line;i++)	
		p[i] = malloc(length+1);

	rewind(fp);

	for(i=0;i<line;i++)
		fgets(p[i],length+1,fp);

	fd = fopen("Output","w");

	for(i=0;i<line;i++)
	{
		for(j=i+1;j<line;j++)
		{
			if(strlen(p[i]) > strlen(p[j]))
			{
				temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}			
		}

		fputs(p[i],fd);
	}
//	for(i=0;i<=line;i++)
}
