#include<stdio.h>
void print(char (*)[10],int);
void print1(char **,int);
main()
{
int i;
char s[][10]={"abc","def","ghi"};
char *p[]={"ABC","DEF","GHI"};
print(s,3);
print1(p,3);
}
void print(char(*p)[10],int n)
{
int i;
for(i=0;i<n;i++)
printf("%s\n",p[i]);
}
void print1(char **p,int n)
{
int i;
for(i=0;i<n;i++)
printf("%s\n",p[i]);
}
