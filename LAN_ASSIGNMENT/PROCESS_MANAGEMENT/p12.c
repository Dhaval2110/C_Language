// 12. Modify the above program so that parent will wait upto child -2 exit.sp after child-2 parent will laso exit and another child become may        be in Zombie or Orphan.

#include"header.h"

main()
{
	int s,c=1,r;
	if(fork()==0)
	{ // Child 1....
		printf("In Child 1....\n");
		srand(getpid());
		r = rand()%10 + 1;
//		sleep(r);
		printf("Child 1 complete....\n");
		exit(1);
	}
	else
	{
		if(fork()==0)
		{ // Child 2....
			printf("In Child 2....\n");
			srand(getpid());
			r = rand()%10 + 1;
//			sleep(r);
			printf("Child 2 complete....\n");
			exit(2);	
		}
		else
		{
			if(fork()==0)
			{ // Child 3....
				printf("In Child 3....\n");
				srand(getpid());
				r = rand()%10 + 1;
//				sleep(r);
				printf("Child 3complete....\n");
				exit(3);
			}
			else
			{ // Parent....
				printf("In Parent....\n");
				while(wait(&s) != -1)
				{
					if(c==2)
						break;
					else
						c++;
				}
				printf("Parent complete....\n");
			}
		}
	}
}
