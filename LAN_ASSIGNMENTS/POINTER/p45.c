#include<stdio.h>
main()
{
	char a[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i,*p = a;
	for(i=0;i<5;i++)
		printf("%d ",*p++);	// first loop will print decimal of ABCDE,2nd is FGHIJ,......
}
