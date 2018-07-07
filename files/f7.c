
#include<stdio.h>
main(int argc,char **argv)
{
	int c=0;
	FILE *fp;
	if(argc!=2)
	{
		printf("usage:./a.out fp fd d1 d2\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
		printf("File is not present\n");
	else
		while((fgetc(fp))!=EOF)
			c++;
	printf("Size of file is %d\n",c);
}
