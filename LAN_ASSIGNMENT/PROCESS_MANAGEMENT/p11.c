//    11.Write a program to create a three child process from the common parent use random delay between 1to 10 sec in each child. Use the exit        value in such a manner so that parent should know the sequence of the child exits.
//      Hint : while(wait(&status)!=-1)
//		{
//			;
//		}

#include"header.h"

main()
{
	int s,r;
	if(fork()==0)
	{
		printf("Child 1....\n");
		srand(getpid());
		r = rand()%20 + 10;
		printf("R = %d\n",r);
		sleep(r);
		exit(1);
	}
	else
	{
		if(fork()==0)
		{
			printf("Child 2....\n");
			srand(getpid());
			r = rand()%20 + 10;
			printf("R = %d\n",r);
			sleep(r);
			exit(2);
		}
		else
		{
			if(fork()==0)
			{
				printf("Child 3....\n");
				srand(getpid());
				r = rand()%20 + 10;
				printf("R = %d\n",r);
				sleep(r);
				exit(3);
			}
			else
			{
				printf("In Parent....\n");
				while(wait(&s) != -1)
				{
					s = s>>8;

					if(s==1)
						printf("Child 1 complete....\n");
					else if(s==2)
						printf("Child 2 complete....\n");
					else
						printf("Child 3 complete....\n");
				}
			}
		}
	}
}
