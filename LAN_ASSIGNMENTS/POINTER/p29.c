#include<stdio.h>
       int main()
       {
	char a[ ] = "abcdefgh";
	int *ptr = a;
	printf("%X %X\n",ptr[0],ptr[1]);
       }
