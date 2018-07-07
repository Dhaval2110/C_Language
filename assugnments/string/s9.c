#include<stdio.h>
main()
{
char s[100],ch,i,j;
printf("Enter the string\n");
//scanf("%s",s);
gets(s);
printf("Enter the char\n");
scanf("%c",&ch);

for(i=0;s[i];i++)
{
if(s[i]==ch)
{
for(j=i;s[j];j++)
s[j]=s[j+1];
i--;
}
}
for(i=0;s[i];i++)
printf("%c",s[i]);
}
