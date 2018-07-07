#include<stdio.h>
main()
{
int i;
char s[3][10]={"abc","def","ghi"};
char *p[]={"ABC","DEF","GHI"};

for(i=0;i<3;i++)
printf("%s",s[i]);
printf("\n----------------\n");
for(i=0;i<3;i++)
printf("%s",p[i]);
}
