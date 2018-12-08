#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(int argc,char **argv)
{
	FILE *fp,*fd;
	int c = 0,i,j;
	char *p,ch;

	fp = fopen(argv[1],"r");

	while(fgetc(fp)!= EOF)
		c++;
	rewind(fp);
	p = malloc(c+1);
	fd = fopen("Output","w");

	while(fscanf(fp,"%s",p)!=EOF)
	{
		if(strcmp(p,argv[2])==0)
		{
			for(i=0;p[i];i++);

			for(j=i-1,i=0;i<j;i++,j--)
			{
				ch = p[j];
				p[j] = p[i];
				p[i] =ch ;
			}

		}
	fprintf(fd,"%s",p);
	}

}
