
#include<stdio.h>
main(int argc,char **argv)
{
	char ch,ch1;
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
		fd=fopen(argv[2],"r");
		if(fd==0)
		{
		printf("not present\n");
		}
		else
		{
		printf("present\n");
		printf("You want to copy?\n");
		scanf("%c",&ch1);
		if(ch1==ch1)
		{
		fd=fopen(argv[2],"w");
		while((ch=fgetc(fp))!=EOF)
			fputc(ch,fd);
		}
		else
		printf("No action\n");
		}
		
	}
}
