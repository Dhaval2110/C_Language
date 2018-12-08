//  3. Create a function named “find-isr”,which when calling by passing an interrupt number then it should inform the action of that signal in         current program.
//     Signal action---->defaulted
//     o/p->Ignore
//     userdefine.
//     Hint : use signal( ) function to return value.

#include"header.h"

void my_isr()
{
	printf("In Isr...\n");
}

void find_isr(int n)
{
	struct sigaction v;
	sigaction(n,0,&v);
	if(v.sa_handler == SIG_DFL)
		printf("Default action....\n");
	else if(v.sa_handler == SIG_IGN)
		printf("Ignore....\n");
	else if(v.sa_handler == my_isr)
		printf("Usre defiened\n");
}

main()
{
	int n;
	signal(2,my_isr);
	printf("Enter signal number...");
	scanf("%d",&n);
	find_isr(n);
	while(1);
}
