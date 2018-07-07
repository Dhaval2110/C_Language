#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	FILE *f1,*f2,*fp;
	char *p,ch;
	int c=0,c1=0,c2=0;

	if(argc != 4)
	{
		printf("Usage:./a.out file_name file_name\n");
		return;
	}

	f1 = fopen(argv[1],"r");
	f2 = fopen(argv[2],"r");

	if(f1==0)
	{
		printf("File 1 is not found !!\n");
		return;
	}
	if(f2==0)
	{
		printf("File 2 is not found !!\n");
		return;
	}

	while(fgetc(f1)!=EOF)
		c1++;

	while(fgetc(f2)!=EOF)
		c2++;

	if(c1>c2)
	{
		p = malloc(sizeof(char *)*c1);
		c = c1;
	}
	else
	{
		p = malloc(sizeof(char *)*c2);
		c = c2;
	}

	rewind(f1);
	rewind(f2);

	fp = fopen("Output","w");

	while((fgetc(f1)!=EOF) && (fgetc(f2)!=EOF))
	{
		fseek(f1,-1,SEEK_CUR);
		fseek(f2,-1,SEEK_CUR);
		fgets(p,c,f1);
		fputs(p,fp);
		fgets(p,c,f2);
		fputs(p,fp);
	}

	if((ch=fgetc(f1))==EOF)
	{
		printf("data is done\n");
		while((ch=fgetc(f2))!=EOF)
		{
			fputc(ch,fp);
		}
	}

	if((ch=fgetc(f2))==EOF)
	{
		printf("data1 is done\n");
		while((ch=fgetc(f1))!=EOF)
		{
			fputc(ch,fp);
		}
	}
}
