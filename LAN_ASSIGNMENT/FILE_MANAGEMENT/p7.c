// 7. WAP to search a given file in a given directory?
//    Hint : ./a.out test.c  /home/vector/

#include"header.h"

int count;

void search(char *,char*);

main(int argc,char **argv)
{
	search(argv[1],argv[2]);
	printf("Total count is : %d\n",count);
}

void search(char *p1,char *f)
{
	char s[200] = {'\0'};
	struct stat v;
	DIR *DP;
	struct dirent *p;

	DP = opendir(p1);
	if(DP == 0)
		return;

	while(p = readdir(DP))
	{
		if(p->d_name[0] != '.')
		{
			strcpy(s,p1);
			strcat(s,"/");
			strcat(s,p->d_name);
			stat(s,&v);
			if(S_ISDIR(v.st_mode))
				search(s,f);
			else
				if(strcmp(p->d_name,f) == 0)
					count++;
		}
	}
}
