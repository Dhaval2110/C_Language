// 1. WAP to find the size of file without opening the file?

#include"header.h"

main(int argc,char **argv)
{
	struct stat v;

	if(argc != 2)
		printf("Try again....\n");

	if(stat(argv[1],&v) < 0)
	{
		perror("stat");
		return;
	}

	printf("size = %u\n",v.st_size);
}
