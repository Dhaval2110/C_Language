// 2. Create a watch dog timer in parent which should watch T.A.T of its child and terminate the  child.
//    Condition:  The child have random delay(1-10 sec). If the child take more than 5 sec then parent terminate it.
//    Hint : fork(),sleep(),kill(),alarm().

#include"header.h"

int p;

void my_isr()
{
	printf("In Isr....");
	printf("Child Terminate By Parent....\n");
	kill(p,9);
}

main()
{
	int r;
	if((p=fork())==0)
	{
		printf("child....\n");
		srand(getpid());
		r = rand()%10 + 1;
		printf("r = %d\n",r);
		sleep(r);
		printf("child done....\n");
		exit(0);
	}
	else
	{
	int s;
		printf("Parent....\n");
		signal(14,my_isr);
		alarm(5);
		wait(&s);
		if(s==0)
			signal(14,SIG_IGN);
		while(1);
	}
}
