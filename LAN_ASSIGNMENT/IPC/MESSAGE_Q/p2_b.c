// 2.WAP to delete all message queues?

#include"header.h"

struct msgbuf
{
	int mtype;
	char mdata[20];
}v;

main()
{
	int id,i;

	id = msgget(5,IPC_CREAT|0644);
	
	while(msgrcv(id,&v,sizeof(v.mdata),1,IPC_NOWAIT))
	{
		msgctl(id,IPC_RMID,0);
	}
