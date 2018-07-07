#include<stdio.h>
int str(char *p);
main()
{
char s[20],len,i,j;
printf("Enter the string\n");
scanf("%s",s);
len=str(s);
printf("Length of %s is %d\n",s,len);
}
int str(char *p)
{
if(*p)
return (1+str(p+1));
else
return 0;
}
