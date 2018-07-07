#include<stdio.h>
main()
{
int b[][3]={10,20,30,40,50,60};

printf("b=%u\n",b);

printf("b[0]=%u\n",b[0]);

printf("&b=%u\n",&b);

printf("&b+1=%u\n",&b+1);

printf("b+1=%u\n",b+1);

printf("b[0]=%u and b[0]+1=%u\n",b[0],b[0]+1);

printf("&b[0][0]=%u b[0][0]+1=%u\n",b[0][0],b[0][0]+1);
}
