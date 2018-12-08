// 9. In the above program the o/p sequence must be date->pwd->cal->ls

#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

main()
{
	int s,t;
	if(fork()==0)
	{
		printf("In Child 1....\n");
		system("date");
		wait(0);
		if(fork()==0)
		{
			printf("In child 2....\n");
			system("pwd");
			wait(0);
			if(fork()==0)
			{
				printf("In Child 3....\n");
				system("cal");
				wait(0);
				if((s=fork())==0)
				{
					printf("In Child 4....\n");
					system("ls");
				//	wait(0);
				}
			}
		}
	}
}
