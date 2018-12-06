#include<stdio.h>
#include<stdlib.h>
void fun()
{
	printf("Hello\n");
}
void fun1(int b)
{
	printf("%d\n",b);
}
main()
{
	void (*func[2])(int);
	func[0]=&fun;
	func[1]=&fun1;
	(*func[0])(10);
	(*func[1])(30);
	
}
