#include<stdio.h>
main()
{
char s[100],i,j,k,y;
printf("Enter the string\n");
scanf("%s",s);

for(i=0;s[i];i++);
for(k=i-1,j=0;j<k;j++,k--)
{
y=s[k];
s[k]=s[j];
s[j]=y;
}

for(i=0;s[i];i++)
printf("%c",s[i]);
}
