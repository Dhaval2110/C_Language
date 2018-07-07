#include<stdio.h>
char *str(const char *,const char *);
main()
{
char m[100],s[100],*p,i,j;
printf("Enterr main\n");
scanf("%[^\n]",m);
printf("Enetr the sub\n");
//scanf("%s",s);
gets(s);
p=str(m,s);
if(p==0)
printf("sub not found");
else
printf("Found %s at %u\n",p,p);
}
char *str(const char *m,const char *s)
{
char i,j;
for(i=0;m[i];i++)
if(m[i]==s[0])
{
for(j=1;s[j];j++)
if(s[j]!=m[i+j])
break;
if(s[j]=='\0')
return m+i;
}
return 0;
}
