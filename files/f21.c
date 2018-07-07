#include<stdio.h>
main()
{

	int i;
	FILE *fp;
	i=sizeof(*fp);
	printf("i=%d\n",i);
	fp=fopen("data","r");
	printf("1)%u\n",fp);
	fgetc(fp);
	printf("2)%u\n",fp);
	fgetc(fp);
	printf("3)%u\n",fp);
}
