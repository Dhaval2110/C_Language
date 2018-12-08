// 3.Implement full duplex communication using one message queue?
//   Hint :  use different mtypes?

#include"header.h"

struct msgbuf
{
	int mtype;
	char mdata[20];
}v;

main()
{
	int id;

	id = msgget(5,IPC_CREAT|0644);
	if(id<0)
	{
		perror("msgget");
		return;
	}
	if(fork())
	{
		while(1)
		{
			v.mtype = 1;
			scanf("%s",v.mdata);
			msgsnd(id,&v,strlen(v.mdata)+1,MSG_NOERROR);
		}
	}
	else
	{
		while(1)
		{
			v.mtype = 2;
			msgrcv(id,&v,sizeof(v.mdata),2,0);
			printf("data = %s\n",v.mdata);
		}
	}
}
