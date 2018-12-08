// 1.a)Process1 will send one string to  process2?
//   b) process2 recieve the string and store alaphetes in one array and digits(Numeric characters) in another array?
//   Ex:  i/p: vector41872india
//        o/p: vectorindia  ------->char array          
//	       41872  ---------->integer array

#include"header.h"
main()
{
	int fd;
	char s[100];

	mkfifo("f1",0644);
	mkfifo("f2",0644);

	fd = open("f1",O_WRONLY);

	while(1)
	{
		gets(s);
		write(fd,s,strlen(s)+1);
	}
}	
