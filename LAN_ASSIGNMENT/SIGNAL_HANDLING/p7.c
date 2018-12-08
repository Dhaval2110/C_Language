// 7. Write a program to create 3 child process from common parent use random delay between 1 to 10 sec in each child. Use alarm() in parent in       such a manner that
//    Child1 should not exceeds more than 4 sec.
//    Child2 should not exceeds more than 6 sec.
//    Child3 should not exceeds more than 8 sec.

#include"header.h"

int a[3];

void my_isr()
{
	static int i;

	if(a[i] != 0)
	{
		kill(a[i],9);
		printf("Child %d is closed...\n",i+1);
	}

	i = i+1;
	alarm(2);
	signal(14,my_isr);
}

void my_isr1()
{
	int i,p;
	p = wait(0);
	for(i=0;i<3;i++)
		if(a[i] == p)
			a[i] = 0;

}

main()
{
	int r;

	if((a[0]=fork())==0)
	{ //Child 1....
		srand(getpid());
		r = rand() % 10 + 1;
		printf("In Child 1...R = %d\n",r);
		sleep(r);
		printf("Child 1 Complete....\n");
	}
	else
	{
		if((a[1]=fork())==0)
		{ //Child 2....
			srand(getpid());
			r = rand() % 10 + 1;
			printf("In Child 2...R = %d\n",r);
			sleep(r);
			printf("Child 2 Complete....\n");
		}
		else
		{
			if((a[2]=fork())==0)
			{ //Child 3....
				srand(getpid());
				r = rand() % 10 + 1;
				printf("In Child 3...R = %d\n",r);
				sleep(r);
				printf("Child 3 Complete....\n");
			}
			else
			{ //Parent....
				int s;

				printf("In Parent....\n");
				signal(14,my_isr);
				signal(17,my_isr1);
				alarm(4);
				while(1);
			}
		}
	}
}
