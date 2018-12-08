// 10. In the above program do not use sleep but o/p sequence must be child first & then parent.

#include"header.h"

main()
{
	int s;

	if(fork()==0)
	{
		printf("Child 1....\n");
		system("date");
		exit(1);
	}
	else
	{
	wait(&s);
		if(fork()==0)
		{
			printf("Child 2....\n");
			system("pwd");
			exit(2);
		}
		else
		{
		wait(&s);
			if(fork()==0)
			{
				printf("Child 3....\n");
				system("cal");
				exit(3);
			}
			else
			{
				wait(&s);
				printf("parent....\n");
				system("ls");
			}
		}
	}
}
