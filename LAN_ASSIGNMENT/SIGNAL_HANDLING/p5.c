// 5. Write a program to ignore the termination of process when its terminal will close. Hint : use SIGHUP signal & signal().

#include"header.h"
main()
{
	signal(1,SIG_IGN);
	while(1);
}
