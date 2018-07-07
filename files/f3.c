
#include<stdio.h>
main(int argc,char **argv)
{
	char ch;
	char a[20];
	FILE *fp;
	if(argc!=2)
	{
		printf("Usage:./a.out fname\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("Not present\n");
	}
	else
	{
		printf("Present\n");
		while((ch=fgetc(fp))!=EOF)
		printf("%c",ch);
		printf("\n");
	}
}
