#include<stdio.h>
main()
{
int i,j;
printf("enter the number\n");
scanf("%d",&i);
//j=i%2;
//j==0?printf("even\n"):printf("odd\n"); /comparison
//j=i%2?printf("odd\n"):printf("even\n"); /direct
i%2?printf("odd\n"):printf("even\n");
}
