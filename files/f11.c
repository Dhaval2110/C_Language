#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	char *p,ch;
	int c=0,c1=0;
	FILE *fp;
	if(argc!=3)
	{
		printf("Usage:./a.out string fname...\n");
		return;
	}
	fp=fopen(argv[2],"r");
	if(fp==0)
	{
		printf("\nFile is not present\n");
		return;
	}
	//	while(fgetc(fp)!=EOF)
	//		c++;
	while((ch=fgetc(fp))!=EOF)
	{	
		c1++;
		if(ch==10)
		{
			if(c<c1)
				c=c1;
			c1=0;
		}
		if(c<c1)
			c=c1;
	}	
	rewind(fp);
	p=malloc(c+1);
	while(fgets(p,c,fp))
		if(strstr(p,argv[1]))
			printf("%s\n",p);
}
