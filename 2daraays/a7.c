#include<stdio.h>
main()
{
int a[10]={10,20,30,40,50,60,70,80,90,100};
int *ip; //p is an integers
int (*p)[3]; //p is a pointer ponting to 3 integers

/*printf("%d %d\n",sizeof(ip),sizeof(p));


printf("ip=%u ip+1=%u\n",ip,ip+1);

printf("p=%u p+1=%u\n",p,p+1);

printf("%d %d\n",sizeof(*ip),sizeof(*p));

printf("ip=%u *ip=%d\n",ip,*ip);

printf("p=%u *p=%u\n",p,*p);


printf("p+1=%u *p+1=%u **p=%u **p+1=%u\n",p+1,*p+1,**p,**p+1);
}*/

printf("%d %d %d\n",(*p)[0],(*p)[1],(*p)[2]);
}
