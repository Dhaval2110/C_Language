
// WAP to print multiplication table from 10 to 20

#include<stdio.h>
main()
{
	int i,j;

////////////////////////////////////////////////////
	for(i=10;i<=20;i++)					// for taking 10 to 20
	{

		for(j=1;j<=10;j++)				// for taking 1 to 10
		{
			printf("%d * %d = %d\n",i,j,i*j);
		}
		printf("\n");
	}
////////////////////////////////////////////////////

}
