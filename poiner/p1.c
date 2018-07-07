#include<stdio.h>
main()
{
int i=10,j=20;
int *p;
p=&i;
//*p=500;    error
printf("%d *p=%d\n",i,*p);

}
