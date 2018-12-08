// 4. Write a program to remove the zombie.  Hint : Use SIGCHLD  &signal( ).

#include"header.h"

void my_isr()
{
	printf("In ISR....\n");
	wait(0);
}

main()
{
	if(fork()==0)
	{
		printf("In Child....\n");
		sleep(5);
		printf("Child done....\n");
	}
	else
	{
		printf("In Parent....\n");
		signal(17,my_isr);
		while(1);
	}
}
