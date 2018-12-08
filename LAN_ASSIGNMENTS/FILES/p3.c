// Write a Program to replace a Specified line in a given file.

#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
        FILE *fp;
        char **p,ch,*q,ch1='\n';
        int line=0,length,c=0,i,j,n,s=0;
///////////////////////////////////////////////////////////////
        if(argc != 2)
        {
                printf("Usage:./a.out File_name\n");
                return;
        }
///////////////////////////////////////////////////////////////
        fp = fopen(argv[1],"r");
///////////////////////////////////////////////////////////////
        if(fp == 0)
        {
                printf("File is not present\n");
                return;
        }
///////////////////////////////////////////////////////////////
        while((ch=fgetc(fp))!=EOF)
        {
		s++;
                c++;
                if(ch == '\n')
                {
                        line++;
                        if(length<c)
                                length = c;
                        c = 0;
                }
        }
        printf("Total lines are : %d\n",line);
        printf("Max. Line length is %d\n",length);
///////////////////////////////////////////////////////////////
        p = malloc(sizeof(char *)*line);
	q = malloc(sizeof(char *)*s);
        for(i=0;i<line;i++)
        {
                p[i] = malloc(sizeof(char *)*s);
        }
///////////////////////////////////////////////////////////////
        rewind(fp);
///////////////////////////////////////////////////////////////
        for(i=0;i<line;i++)
        {
                fgets(p[i],length+1,fp);
                printf("%s",p[i]);
        }
        printf("---------------------------------\n");
///////////////////////////////////////////////////////////////
        printf("Which line you want to delete....\n");
        scanf("%d",&n);

	printf("Print new line:");
	scanf("%s",q);
///////////////////////////////////////////////////////////////
        if(n>line)
        {
                printf("Line is not Present\n");
                return;
        }
///////////////////////////////////////////////////////////////
        fp = fopen(argv[1],"w");
///////////////////////////////////////////////////////////////
        for(i=0;i<line;i++)
	{
		if(i == n-1)
		{
			fputs(q,fp);
			fputc(ch1,fp);
		}
		else
			fputs(p[i],fp);
	}
///////////////////////////////////////////////////////////////
}

