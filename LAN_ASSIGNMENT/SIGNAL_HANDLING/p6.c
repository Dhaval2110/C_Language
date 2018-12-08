// 6.Write a program to install ISR(handler) for SIGINT and SIGQUIT . Restore the SIGINT to  default after 3 times occurrence.SIGQUIT to default     after 5 times occurrence.

#include"header.h"

void my_isr(int n)
{
	static int c,c1;
	if(n == 2)
		c++;
	else if(n == 3)
		c1++;

	if(c == 3)
		signal(2,SIG_DFL);
	if(c1 == 5)
		signal(3,SIG_DFL);
}

main()
{
	signal(2,my_isr);
	signal(3,my_isr);
	while(1);
}
