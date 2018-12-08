// Write a Program to implement wc command.(Check the command: wc filename.c)

#include<stdio.h>

main(int argc,char **argv)
{
	FILE *fp;
	int count=0,word=0,line=0,c=0;
	char ch;

	if(argc != 2)
	{
		printf("Usage:./a.out File_name\n");
		return;
	}

	fp = fopen(argv[1],"r");

	while((ch=fgetc(fp))!=EOF)
	{
		count++;

		if(ch == ' ' || ch == '\n')
			word++;
		if(ch == '\n')
			line++;
	}

	printf(" %d %d %d %s\n",line,word,count,argv[1]);
}
