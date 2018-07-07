#include<stdio.h>
main()
{
int i=10;
float f=23.5;
char ch='a';
void *p;
p=&i;
//p=(int *)p++;    We can increment it by type casting
printf("%d\n",*(int *)p);
p=&ch;
printf("%c\n",*(char *)p);
p=&f;
printf("%f\n",*(float *)p);
}
}
