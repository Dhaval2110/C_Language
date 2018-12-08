// 2. Write a program to execute a command with its arguments given at command line.
//i/p : ./a.out  ls –l 
//	./a.out cal 2011.

#include<stdio.h>
#include<string.h>

main(int argc,char **argv)
{
	char s[200];
	int i;

	if(argc < 3)
	{
		printf("Usage:./a.out command option\n");
		return;
	}

	strcpy(s,argv[1]);
	strcat(s," ");
	strcat(s,argv[2]);

	system(s);
}
