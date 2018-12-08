// 6.Write a program to creat  3 new  jobs , in such a manner that all the 3 new jobs should have common parent.
// x----->bash
// x+1--->x
// x+2--->x
// x+3--->x

#include<stdio.h>

main()
{
int r;
	if(fork()==0)
	{ // Child 1....
		printf("In child 1...\n");
		printf("PID = %d\tPPID = %d\n",getpid(),getppid());
		srand(getpid());
		r = rand()%10 + 1;
		printf("R = %d\n",r);
		sleep(r);
		printf("Child 1 done....\n");
	}
	else
	{
		if(fork()==0)
		{ // Child 2....
			printf("In child 2...\n");
			printf("PID = %d\tPPID = %d\n",getpid(),getppid());
			srand(getpid());
			r = rand()%10 + 1;
			printf("R = %d\n",r);
			sleep(r);
			printf("Child 2 done....\n");
		}
		else
		{
			if(fork()==0)
			{ // Child 3....
				printf("In child 3...\n");
				printf("PID = %d\tPPID = %d\n",getpid(),getppid());
				srand(getpid());
				r = rand()%10 + 1;
				printf("R = %d\n",r);
				sleep(r);
				printf("Child 3 done....\n");
			}
			else
			{ //Parent....
				printf("In Parent....\n");
				srand(getpid());
				r = rand()%10 + 1;
				printf("R = %d\n",r);
				sleep(r);
				printf("Parent done....\n");
			}
		}
	}
}
