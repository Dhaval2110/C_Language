#include<stdio.h>
main()
{
int i=258,*ip;
char *cp;
ip=cp=&i;
printf("ip=%u cp=%u\n",ip,cp);
printf("ip+1=%u cp+1=%u\n",ip+1,cp+1);
}
