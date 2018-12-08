// Write a recursive function to that displays all the proper divisors of a given numbe exept that and returns their sum.
//	 Ex: 1,3,5,9,15 & 45 are the proper divisors of 45.     sum = 1+3+5+9+15 = 33

#include<stdio.h>
void fraction(int);
main()
{
	int num;
	printf("Num : ");
	scanf("%d",&num);
	fraction(num);
	printf("\n");
}

void fraction(int num)
{
	static int s=1,res;
	if(s<num)
	{
		if(num%s==0)
		{
			res=res+s;
			printf("%d ",s);
		}
		s++;
		fraction(num);
	}
	
	else
	{
		printf("\nresult : %d\n",res);
	}
} 
