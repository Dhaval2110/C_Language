#include<stdio.h>
main()
{
	int i,j,k,l;

	for(i=1;i<=6;i++)
	{
		for(k=1;k<=i;k++)
			printf("%d ",k);

		for(j=1;j<=2*(6-i);j++)
			printf("  ");

		for(k=1,l=i;k<=i;k++,l--)
			printf("%d ",l);
	printf("\n");
	}

}
