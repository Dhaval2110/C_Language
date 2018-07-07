#include<stdio.h>
main()
{
	int i=100;
	FILE *fp;
	fp=fopen("data","w");
	//fprintf(fp,"%d",i);
//	fwrite(&i,4,1,fp);
	fread(&i,4,1,fp);
	printf("%d",i);
}
