
#include<stdio.h>
main(int argc,char **argv)
{
	int i,c=0;
	char ch;
	FILE *fp;
	if(argc!=3)
	{
		printf("usage:./a.out fp fd d1 d2\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
		printf("File is not present\n");
	else
		while((ch=fgetc(fp))!=EOF)
			if(ch==argv[2][0])
				c++;
	printf("c=%d\n",c);
}
