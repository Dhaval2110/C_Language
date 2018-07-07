#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch,**p;
	char s[100]="Hello";
	int d,i,j,k,l=0,c=0,c1=0;
	if(argc!=2)
	{
		printf("Usage:./a.out fnamr\n");
		return;
	}
	fp=fopen(argv[1],"r+");
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

//	printf("Size=%d and lines=%d\n",c,l);
///////////////
rewind(fp);
p=malloc(sizeof(char *)*l);
for(i=0;i<l;i++)
p[i]=malloc(c+1);

///////////////

printf("Enter the line you want to replace\n");
scanf("%d",&k);


////////////////

for(i=0;i<l;i++)
{

if(l==k)
fputs(s,fp);
fprintf(fp,"%s\n",p);


}












}
