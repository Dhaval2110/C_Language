#include<stdio.h>
main()
{
	char ch;
	int i,j,k;
	for(i=0;i<4;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		if(i%2)
			ch='a';
		else
			ch='A';
		for(k=4;k>i;k--)
			printf("%c ",ch++);
		printf("\n");
	}
}
