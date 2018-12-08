// 2. WAP to compare the size of two files ,input from command line.     Hint : ./a.out file1  file2

#include"header.h"

main(int argc,char **argv)
{
	struct stat v,v1;
	int f1,f2;

	if(argc != 3)
	{
		printf("./a.out file1 file2\n");
		return;
	}

	if(stat(argv[1],&v) < 0)
	{
		perror("stat[file1]");
		return;
	}
	if(stat(argv[2],&v1) < 0)
	{
		perror("stat[file1]");
		return;
	}

	f1 = v.st_size;
	f2 = v1.st_size;

	if(f1 == f2)
		printf("both file are same size....\n");
	else if(f1 > f2)
		printf("%s is big....\n",argv[1]);
	else
		printf("%s is big....\n",argv[2]);
}
