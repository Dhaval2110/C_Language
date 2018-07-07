#include<stdio.h>
main(int argc,char **argv)
{
	char ch;
	FILE *fp,*fd;
	if(argc!=3)
	{
		printf("Usage:./a.out fp fd\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File is not present\n");
	}
	else
	{
		printf("Present\n");
		fd=fopen(argv[2],"w");
		while((ch=fgetc(fp))!=EOF)
			fputc(ch,fd);
	}
}
