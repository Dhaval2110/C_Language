
// WAP to SWAP to number using bitwise operator.

#include<stdio.h>
main()
{
	unsigned int i,j;
	printf("Enter i : ");
	scanf("%d",&i);
	printf("Enter j : ");
	scanf("%d",&j);
	printf("before swaping i : %d , j : %d\n",i,j);
	i = i^j;
	j = i^j;
	i = i^j;
	printf("after swaping i : %d , j : %d\n",i,j);
}
