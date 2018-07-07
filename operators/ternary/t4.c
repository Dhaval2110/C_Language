#include<stdio.h>
main()
{
int a,b,c;
printf("eneter the numbers...\n");
scanf("%d %d %d",&a,&b,&c);
a>b?(a>c?printf("a\n"):printf("c\n")):(b>c?printf("b\n"):printf("c\n"));

}
