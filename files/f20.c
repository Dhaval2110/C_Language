
#include<stdio.h>
main()
{	int a[5];
	int i;
	FILE *fp;
	fp=fopen("data","r");
	fread(a,4,5,fp);
	for(i=0;i<5;i++)
	printf("%d ",a[i]);	
	printf("\n");
}
