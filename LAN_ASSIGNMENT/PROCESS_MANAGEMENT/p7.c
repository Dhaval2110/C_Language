#include<stdio.h>

main()
{
int r;
	if(fork()==0)
	{ // Child 1....
		if(fork()==0)
		{ // Child 2....
			if(fork()==0)
			{ // Child 3....
				printf("In child 3...\n");
				printf("PID = %d\tPPID = %d\n",getpid(),getppid());
				srand(getpid());
				r = rand()%10 + 1;
				printf("R = %d\n\n",r);
				sleep(r);
				printf("Child 3 done....\n");
			}
			else
			{
				printf("In child 2...\n");
				printf("PID = %d\tPPID = %d\n",getpid(),getppid());
				srand(getpid());
				r = rand()%10 + 1;
				printf("R = %d\n\n",r);
				sleep(r);
				printf("Child 2 done....\n");
			}
		}
		else
		{
			printf("In child 1...\n");
			printf("PID = %d\tPPID = %d\n",getpid(),getppid());
			srand(getpid());
			r = rand()%10 + 1;
			printf("R = %d\n\n",r);
			sleep(r);
			printf("Child 1 done....\n");
		}
	}
	else
	{ //Parent....
		printf("In Parent....\n");
		printf("PID = %d\n",getpid());
		srand(getpid());
		r = rand()%10 + 1;
		printf("R = %d\n\n",r);
		sleep(r);
		printf("Parent done....\n");
	}
}
