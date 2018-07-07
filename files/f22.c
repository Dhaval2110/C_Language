#include<stdio.h>
main()
{

	int i;
	FILE *fp;
	i=sizeof(*fp);
	printf("i=%d\n",i);
	fp=fopen("data","r");
	printf("1)%u %u\n",fp,ftell(fp));
	fgetc(fp);
	printf("2)%u %u\n",fp,ftell(fp));
	fgetc(fp);
	printf("3)%u %u\n",fp,ftell(fp));
}
