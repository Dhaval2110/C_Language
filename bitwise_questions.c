//bitwise operation interview questions
//common main part
#include<stdio.h>
#define set(n,i) n|=1<<i;
#define clear(n,i) n&=~(1<<i);
#define toggle(n,i) n=n^(1<<i);
void main()
{
int i;
int n;
printf("Enter the number\n");
scanf("%d",&n);
// 1. How to check whether no is positive or negative.
/* 
if((n&(1<<31))==0)
printf("No is positive\n");
else
printf("No is negative\n");
*/
//2. How to check if no is even or odd.
/* 
if(n&1)
printf("No is odd\n");
else
printf("No is even\n"); */
//3. Program to set , clear and toggle the bit
/*
printf("Enter the position to set or clear or toggle the bit\n");
scanf("%d",&i);
set(n,i);
printf("No is now %d\n",n);
clear(n,i);
printf("No is now %d\n",n);
toggle(n,i);
printf("No is now %d\n",n);
*/
//4. How to swap 2 no using bitwise
/*
printf("Enter second no\n");
scanf("%d",&i);
n=n^i;
i=n^i;
n=n^i;
printf("After no n=%d and i=%d \n",n,i);
*/
//5. How to find no of set bits in a number
//int c=0;
//Logic 1. 
/*
for(i=0;i<=31;i++)
{
if((n&(1<<i)))
c+=1;
}
*/
//Logic 2.
/*
while(n){
n&=(n-1);
c++;
}
printf("No of set bits is c=%d\n",c);
*/

}
