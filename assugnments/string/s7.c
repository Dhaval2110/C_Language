#include<stdio.h>
main()
{
char s[100],i,j,k=0,l;
printf("Enter the string\n");
scanf("%s",s);



for(i=0;s[i];i++);
for(j=i-1,i=0;i<j;i++,j--)
if(s[i]==s[j])
k=k++;

if(k>=2)
printf("Pelimdro,m\n");
else
printf("Not palindrom\n");
}
