

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch,**p,s[100],s1[100];
	int d,i,j,l=0,c=0,c1=0,k;
	if(argc!=2)
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
	while((ch=fgetc(fp))!=EOF)
	{
		c1++;
		if(ch==10)
		{
			l++;
			if(c<c1)
				c=c1;
			c1=0;
		}
	}
	if(c<c1)
		c=c1;

	//		printf("Size=%d and lines=%d\n",c,l);
	///////////////
	rewind(fp);
	p=malloc(sizeof(char *)*l);
	for(i=0;i<l;i++)
		p[i]=malloc(c+1);
	///////////////

	for(i=0;i<l;i++)
		fgets(p[i],c+1,fp);

	////////////////////

	printf("Enter the line you want to replace\n");
	scanf("%d",&k);
	printf("Enter the string you want\n");
	scanf("%s",s);
	
//	printf("Enter the string you want\n");
//	scanf("%s",s1);

	fp=fopen(argv[1],"w");
	for(i=0;i<l;i++)
	{
		if(i!=k)
		{
			fputs(p[i],fp);
		}
		else
		{
			fputs(s,fp);
			s[i]='\0';
//			fputs(s1,fp);
		}
	}
}
