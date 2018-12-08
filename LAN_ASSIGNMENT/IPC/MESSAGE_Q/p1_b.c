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

main()
{
	int id;
	char s[50];
	DIR *DP;
	struct dirent *p;
	struct stat f;
	v.i.link = v.i.count = 0;
////////////////////////////////////////////////////
	id = msgget(5,IPC_CREAT|0644);
	if(id<0)
	{
		perror("msgget");
		return;
	}
////////////////////////////////////////////////////
	msgrcv(id,&v,sizeof(v),1,0);
	printf("%s\n",v.i.dir);
////////////////////////////////////////////////////
	DP = opendir(v.i.dir);
	while(p = readdir(DP))
	{
		if(p->d_name[0] != '.')
		{
			strcpy(s,v.i.dir);
			strcpy(s,"/");
			strcpy(s,p->d_name);

			stat(s,&f);
			v.i.count++;
			v.i.link = v.i.link + f.st_nlink;
			bzero(s,sizeof(s));
		}
	}
//////////////////////////////////////////////////////
	v.mtype = 2;
	msgsnd(id,&v,sizeof(v),0);
}
