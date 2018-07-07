#include<stdio.h>
main()
{
int a[10]={10,20,30,40,50,60,70,80,90,100};
int *p[5]={a,a+3,a+5,a+1,a+2};


printf("%d\n",p[2][1]);
printf("%d\n",p[1][3]);

printf("%d %d %d\n",**p+1,*(*p+1),*(*(p+1)));


printf("%d %d %d\n",**p+1,*(*p+2),*(*(p+1)));
}
