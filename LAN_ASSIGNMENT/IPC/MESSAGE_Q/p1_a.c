// 1.process1 will send directory name to process2 Process2 after recieving directory name,open directory,send back no.of files and no.of            hardlinks to process1.

#include"header.h"

struct msgbuf
{
	int mtype;

	struct data
	{
		int link;
		int count;
		char dir[20];
	}i;
}v;

main(int argc,char **argv)
{
	int id;
///////////////////////////////////////////////////////
	if(argc != 2)
	{
		printf("Usage:./p1_a dir_name");
		return;
	}
///////////////////////////////////////////////////////
	id = msgget(5,IPC_CREAT|0644);
	if(id < 0)
	{
		perror("msgget");
		return;
	}
///////////////////////////////////////////////////////
	v.mtype = 1;
	strcpy(v.i.dir,argv[1]);
///////////////////////////////////////////////////////
	msgsnd(id,&v,sizeof(v),0);
///////////////////////////////////////////////////////
	msgrcv(id,&v,sizeof(v),2,0);
	printf("Count = %d\nHardlink = %d\n",v.i.count,v.i.link);
}
