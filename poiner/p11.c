#include<stdio.h>
main()
{
int i=258,*ip;
char *cp;
cp=&i;
printf("%d\n",*cp);
*cp=*cp+1;
printf("%d\n",*cp);
}  
