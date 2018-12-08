// 1. Write a  program to deliver the alarm signal periodically after (n-1)sec from the last interrupt.
//    Hint : Start first alarm at 10 sec then next alarm at 9sec so on up to n=0 terminate .

#include"header.h"

int i = 5;

void my_isr()
{
	printf("i = %d\n",i);
	i--;
	alarm(i);
}

main()
{
	printf("hello....\n");
	signal(14,my_isr);
	alarm(5);
	while(1);
}
