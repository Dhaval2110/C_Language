// 3.process1 will send directory name to process2.Process2 after recieving directory name,open directory and count no.of files.and that result      send back to process1.

#include"header.h"
main()
{
	int fd,fd1,count=0;
	char s[100];
	DIR *DP;
	struct dirent *p;

	mkfifo("f1",0644);
	mkfifo("f2",0644);

	fd = open("f1",O_RDONLY);
	fd1 = open("f2",O_WRONLY);

	while(1)
	{
		read(fd,s,sizeof(s));
		DP = opendir(s);
		while(p = readdir(DP))
			count++;
		write(fd1,&count,4);
	}
}
