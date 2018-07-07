#include<stdio.h>
void print(char *);
main()
{
char s[10],n;
printf("Enter the string\n");
scanf("%s",s);
print(s);
printf("\n");
}
void print(char *p)
{
if(*p)
{
print(++p); //start counting from ello
// print(p+1); olleh
printf("%c ",*p);
//print(p+1);  Hello
//print(p++); hhhhh..upto stack overflow
//print(++p); hello

}
}
