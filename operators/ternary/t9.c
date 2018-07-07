#include<stdio.h>
main()
{
int num,pos,res;
printf("enter num and pos\n");
scanf("%d %d",&num,&pos);

res=num|1<<pos;
printf("res=%d\n",res);

res=num&~(1<<pos);
printf("res=%d\n",res);

res=num^1<<pos;
printf("res=%d\n",res);
}
