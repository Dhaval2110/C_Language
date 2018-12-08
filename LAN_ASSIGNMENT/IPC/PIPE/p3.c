// 3.a)Parent process send one Character to child process.
//   b)child recieve the Character  from parent and  display recevied character on screen.

#include"header.h"
main()
{
	int p[2];
	char ch;

	pipe(p);

	if(fork()==0)
	{
		printf("In Child....\n");
		while(1)
		{
			scanf(" %c",&ch);
			write(p[1],&ch,1);
		}
	}
	else
	{
		printf("In Parent....\n");
		while(1)
		{
			read(p[0],&ch,1);
			printf("value = %c\n",ch);
		}
	}
}
