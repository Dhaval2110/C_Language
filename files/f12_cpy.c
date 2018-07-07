
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
	char **p,ch,temp[100];
	int lc=0,c=0,c1=0,i,j,l;
	FILE *fp,*fd;
	if(argc!=3)
	{
		printf("Usage:./a.out sfname dfname....\n");
		return;
	}
	fp=fopen(argv[1],"r");
	if(fp==0)
	{
		printf("File is not present\n");
		return;
	}
	while((ch=fgetc(fp))!=EOF)
	{
		c1++;
		if(ch=='\n')
		{

			lc++;          //line counter to count the lines
			if(c<c1)
				c=c1;
			c1=0;	
		}
		if(c<c1)
		c=c1;

	}

	//	printf("Size of file and lines %d %d\n",c,lc);
	c=c+1;
	rewind(fp);
	p=malloc(sizeof(char *)*lc);
	for(i=0;i<lc;i++)
		p[i]=malloc(c);

	for(i=0;i<lc;i++)
	{
		fgets(p[i],c,fp);
	}
	for(i=0;i<lc;i++)
	{
		for(j=i+1;j<lc;j++)	
			if(strlen(p[i])>strlen(p[j]))
			{
				strcpy(temp,p[i]);
				
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);
			}

	}
	fd=fopen(argv[2],"w");
	for(i=0;i<lc;i++)
		fputs(p[i],fd);




	//	while(fgets(*p,c,fp))

	//for(i=0;i<lc;i++)
	//	printf("%s",p[i]);

}
