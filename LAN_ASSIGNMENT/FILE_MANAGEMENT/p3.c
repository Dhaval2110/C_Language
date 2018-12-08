// 3. WAP to print the type of given file,input from command line?

#include"header.h"

main(int argc,char ** argv)
{
	struct stat v;

	if(argc != 2)
	{
		printf("Usage:./a.out file_name\n");
		return;
	}

	if(lstat(argv[1],&v) < 0)
	{
		perror("stat");
		return;
	}

	if(S_ISDIR(v.st_mode))
		printf("Directiory file....\n");

	else if(S_ISLNK(v.st_mode))
		printf("Link file....\n");

	else if(S_ISREG(v.st_mode))
		printf("Regular file....\n");

	else if(S_ISFIFO(v.st_mode))
		printf("Pipe File....\n");

	else if(S_ISSOCK(v.st_mode))
		printf("Socket file....\n");
}
