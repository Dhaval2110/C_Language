// 1.a)Parent process will send one string to child process?
//   b)child recieve the string from parent and display recived data on screen ?

#include"header.h"
main()
{
	int p[2];
	char s[50];

	pipe(p);

	if(fork()==0)
	{
		printf("In Parent....\n");
		while(1)
		{
			gets(s);
			write(p[1],s,strlen(s)+1);
		}
	}
	else
	{
		printf("In Child....\n");
		while(1)
		{
			read(p[0],s,sizeof(s));
			printf("data = %s\n",s);
		}
	}
}
