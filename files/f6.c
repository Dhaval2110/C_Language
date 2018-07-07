#include<stdio.h>
main(int argc,char **argv)
{
	int i;
	char ch;
	char a[20];
	FILE *fp,*fd;
	if(argc<3)
	{
		printf("usage:./a.out fp fd d1 d2\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
		printf("File is not present\n");
	else
	{
		printf("File is present\n");
		for(i=2;i<argc;i++)
		{
			fd=fopen(argv[i],"w");
			while((ch=fgetc(fp))!=EOF)
				fputc(ch,fd);
		//	rewind(fp);
		//	fp=fopen(argv[1],"r");
		}
	}
}
