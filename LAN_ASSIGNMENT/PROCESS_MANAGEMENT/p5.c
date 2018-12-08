//5.	Write a program to execute the no of commands from command line
//	a) using system( )
//	b) using exec()
//      Note : no of new process create must be euql to no of cmd given at command line)


#include<stdio.h>
#include<unistd.h>
main(int argc,char **argv)
{
/*	int i;
	for(i=1;i<argc;i++)
	{
		if(fork()==0)
			break;
		else
		{
			system(argv[i]);
		}
	}
			while(1);
*/

	int i;
	for(i=1;i<argc;i++)
	{

		char *p[]={argv[i],NULL};

		if(fork()==0)
		{
			printf("1");
			execvp(p[0],p);
		}
		else
			break;
	}
	while(1);
}
