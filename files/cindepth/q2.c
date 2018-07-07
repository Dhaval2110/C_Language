#include<stdio.h>
int main(void)
{
	FILE *fp;
	int ch;
	fp=fopen("data","w");
	fprintf(fp,"If equal love there cannot be..");
	fputc(26,fp);
	fprintf(fp,"..let the more loving one be me\n");
	fclose(fp);
	fp=fopen("data","r");
	while((ch=fgetc(fp))!=EOF)
		putchar(ch);
	return 0;
}
