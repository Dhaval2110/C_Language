#include<stdio.h>
main()
{
	char a[20];
	FILE *fp;
	//fp=fopen("data","r");
	printf("Enter the file name\n");
	scanf("%s",a);
	fp=fopen(a,"r");
	if(fp==0)
	{
		printf("File is not present\n");
	}
	else
	{
		printf("file is present\n");
	}
}
