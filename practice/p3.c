#INCLUde<stdio.h>
main()
{
int i,j;
printf("enter the nums\n");
scanf("%d %d",&i,&j);
i=i^j;
j=i^j;
i=i^j;
printf("%d %d\n",i,j);
}
