// 13. Write a program to i/p 2 small(1 to 50) integers from command line and add two interger in child process and print the sum in parent            process.

#include"header.h"

main(int argc,char **argv)
{
	int s;

	if(argc != 3)
	{
		printf("Usage: ./a.out number number\n");
		return;
	}

	if(fork()==0)
	{
		int sum;
		printf("In Child....\n");
		sum = atoi(argv[1]) + atoi(argv[2]);
		exit(sum);
	}
	else
	{
		wait(&s);
		s = s>>8;
		printf("SUM = %d\n",s);
	}
}
