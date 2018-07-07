#include<stdio.h>
int stcom(char *,char *);
main()
{
char s[10],s1[10],ret;

printf("Enter the two strings\n");
scanf("%s %s",s,s1);

ret=stcom(s,s1);
if(ret==0)
printf("Both are equls\n");
else if(ret==1)
printf("S is greater\n");
else
printf("S1 is greater\n");
}
int stcom(char *p,char *q)
{
int i;
for(i=0;p[i];i++)
if(p[i]!=q[i])
break;

if(p[i]==q[i])
return 0;
else if(p[i]>q[i])
return 1;
else
return -1;
}
