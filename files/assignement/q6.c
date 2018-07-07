#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp,*fd;
	char ch,*p,t;
	int d,i,j,l=0,c=0,c1=0,k;
	if(argc!=3)
	{
		printf("Usage:./a.out fnamr\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File is not presnet\n");
	}
	/////////////
	while((fgetc(fp))!=EOF)
		c++;
		fp=fopen(argv[1],"r");	
		///////////////
		rewind(fp);
		p=malloc(c+1);
		///////////////

		fd=fopen("output","w");
		while((fscanf(fp,"%s",p))!=EOF)
		{
			if(strcmp(p,argv[2])==0)
			{
				for(i=0;p[i];i++);
				for(j=i-1,i=0;i<j;i++,j--)
				{
					t=p[j];
					p[j]=p[i];
					p[i]=t;
				}
			}
			fprintf(fd,"%s\n",p);
		}
	}
