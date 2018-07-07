#include<stdio.h>
void swap(int *,int *);
main()
{
int num,r,i,j;
printf("Enter the numbers\n");
scanf("%d %d",&i,&j);

printf("Before i=%d\t j=%d\n",i,j);

swap(&i,&j);


printf("After i=%d\t j=%d\n",i,j);


}
void swap(int *q,int *p)
{
int k;
k=*q;
*q=*p;
*p=k;


}
