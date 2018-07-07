
#include<stdio.h>
main(int argc,char **argv)
{
	int i,c=0;
	char ch,*p;
	FILE *fp;
	if(argc!=4)
	{
		printf("usage:./a.out fp fd d1 d2\n");
		return;
	}
	fp=fopen(argv[1],"r+");
	if(fp==0)
	{
	printf("File is not present\n");
	return;
	}
/*	while((ch==fgetc(fp))!=EOF)
	if(ch==argv[2][0])
	{
	fseek(fp,-1,SEEK_CUR);
	fputc(argv[3][0],fp);
	}
}*/
	/////////////////step 1/////////////////////////
		while(fgetc(fp)!=EOF)
			c++;
	printf("size is c=%d\n",c);
	//////////////////////////////////////////////////

	////////////////step 2////////////////////////////
	rewind(fp);
	p=malloc(c+1);
	//////////////////////////////////////////////////

	////////////////step 3////////////////////////////
	i=0;
	while((ch=fgetc(fp))!=EOF)
		p[i++]=ch;
	p[i]='\0';
	//////////////////////////////////////////////////

	/////////////////step 4//////////////////////////
	printf("%s\n",p);
	for(i=0;p[i];i++)
		if(p[i]==argv[2][0])
			p[i]=argv[3][0];
	/////////////////////////////////////////////////

	/////////////////step 5/////////////////////////
	printf("\n------------------------------------\n");
	printf("%s\n",p);
	rewind(fp);
	//for(i=0;p[i];i++)
	//	fputc(p[i],fp);
	fputs(p,fp);
}
