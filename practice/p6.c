#include<stdio.h>
main()
{
char ch;
printf("Enter the char\n");
scanf("%c",&ch);
if(ch>=97 && ch<=122)\
ch=ch&~(1<<5);
printf("ch=%c\n",ch);
}
