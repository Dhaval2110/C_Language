#Ex 1
#include<stdio.h>
#include<stdlib.h>
void fun()                        //function definition 
{
	printf("Hello\n");
}
void fun1(int b)
{
	printf("%d\n",b);
}
main()
{
	void (*func[2])(int);          //same syntax should be define as function which you have to call as a fp
	func[0]=&fun;                  //mapping a function to pointer
	func[1]=&fun1;
	(*func[0])(10);                //most imp : call
	(*func[1])(30);
	
}

#Ex 2

int clear(int n,int p)
{
	n=n&~(1<<p);
	return n;
}
main()
{
	int r;
	int (*fptr)(int,int);
	fptr=&clear;
	r=clear(15,2);
	printf("%d",r);
}
