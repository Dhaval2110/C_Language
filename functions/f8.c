#include<stdio.h>
void str(const char *,char *);
main()
{
char s[10],s1[10],i;
str(s,s1);
printf("s=%s s1=%s",s,s1);
printf("\n");
}
void str(const char *p,char *q)
{
int i;


printf("Enter the string\n");
scanf("%s",p);

//for(i=0;p[i];i++)
//printf("%c",p[i]);


for(i=0;p[i];i++)
q[i]=p[i];
q[i]=p[i];
}
