// 1. Write a program to execute ls , pwd & cal sequentially. a) Using system( ), b) Using exec( ), Hint : use fork().

#include<stdio.h>
main()
{
	printf("\n");
	system("ls");
	printf("\n");
	system("pwd");
	printf("\n");
	system("cal");
}
