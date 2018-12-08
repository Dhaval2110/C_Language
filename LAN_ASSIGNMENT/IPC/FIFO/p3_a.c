// 3.process1 will send directory name to process2.Process2 after recieving directory name,open directory and count no.of files.and that result      send back to process1.

#include"header.h"

main()
{
	int fd,fd1,count;
	char s[100];
	
	mkfifo("f1",0644);
	mkfifo("f2",0644);

	fd = open("f1",O_WRONLY);
	fd1 = open("f2",O_RDONLY);

	while(1)
	{
		gets(s);
		write(fd,s,strlen(s));
		read(fd1,&count,4);
		printf("Total files are : %d\n",count);
	}
}









