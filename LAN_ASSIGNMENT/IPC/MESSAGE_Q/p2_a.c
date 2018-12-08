// 2.WAP to delete all message queues?

#include"header.h"

main(int argc,char **argv)
{
	int id,i;

	if(argc < 2)
	{
		printf("Usage:./a.out msg_key ...\n");
		return;
	}

	for(i=1;i<argc;i++)
	{
		msgctl(atoi(argv[i]),IPC_RMID,0);
	}
}
