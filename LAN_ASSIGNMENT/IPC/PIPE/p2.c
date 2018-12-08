// 2.a)Parent process send one integer value to child process.
//   b)child after recieving  integer value from parent ,display the result on screen.

#include"header.h"
main()
{
	int p[2];
	int i;

	pipe(p);

	if(fork()==0)
	{
		printf("In Child....\n");
		while(1)
		{
			scanf("%d",&i);
			write(p[1],&i,4);
		}
	}
	else
	{
		printf("In Parent....\n");
		while(1)
		{
			read(p[0],&i,4);
			printf("value = %d\n",i);
		}
	}
}
