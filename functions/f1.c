#include<stdio.h>
void binary(int);
main()
{
int num,r;
printf("Enter the num\n");
scanf("%d",&num);
binary(num);

printf("\n");




}
void binary(int n)
{
int i,c;
for(i=31;i>=0;printf("%d",n>>i--&1));

}

