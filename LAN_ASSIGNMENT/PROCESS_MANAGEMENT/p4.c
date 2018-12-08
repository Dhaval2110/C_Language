//4.	Write a program to pass num of commands each seperated by delimiter(,) through command line.
//      I/p :   ./a.out   ls,pwd,cal,date

#include<stdio.h>

main(int argc,char **argv)
{
	char s[50];
	int i=0,j=0;
	if(argc < 2)
	{
		printf("Usage :./a.out command,command,...\n");
		return;
	}

	for(i=0,j=0;argv[1][j];i++,j++)
	{
		if(argv[1][j]!=',')
			s[i] = argv[1][j];

		else
		{
			s[i] = '\0';
			system(s);
			printf("\n");
			i=-1;
		}
	}
	s[i]='\0';
	system(s);
}
