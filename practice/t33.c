#include<stdio.h>
main()
{
char s[100],i,j,k,l,t;
printf("Entert he string\n");
scanf("%[^\n]",s);

printf("Before s=%s\n",s);

for(i=0;s[i];i++);
for(j=i-1,k=0;k<j;j--,k++)
{
l=s[j];
s[j]=s[k];
s[k]=l;
}

printf("Now %s\n",s);

for(i=0;s[i];i++)
{
j=i;
for(;s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9';i++);

for(k=i-1;k>j;k--,j++)
{
t=s[k];
s[k]=s[j];
s[j]=t;
}
}
printf("Now %s\n",s);
}
