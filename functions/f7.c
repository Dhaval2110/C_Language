#include<stdio.h>
void str(char *);
main()
{
//char s[10]="EMBEDDED",j;
//str(s);
char s[10];
str(s);
printf("\n");

}
void str(char *p)
{
char i;
printf("Enter the string\n");
scanf("%s",p);

for(i=0;p[i];i++);
printf("Copy = %s\n",p);

//printf("\n");
}
