
// WAP to print fibbonacci series between 0 to 50.

#include<stdio.h>
main()
{
	int i=0,res=0;

	while(i<=50)
	{
		if(i<1)
		i++;
		res=res+i;
		i=res;
		printf("%d ",i);
	}

}
