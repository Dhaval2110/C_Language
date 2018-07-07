#include<stdio.h>
int main(void)
{
	FILE *fptr;
	unsigned char ch,c=0;
	fptr=fopen("data","r");
	while((ch=fgetc(fptr))!=EOF)
	//	putchar(ch);
		c++;
	printf("%d",c);
	fclose(fptr);
	return 0;
}
