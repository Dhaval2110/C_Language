#include<stdio.h>
int main()
{
	char a[]="Hello";
	char *p="Hai";		// once u define a[], then u can not change address of array it....
	p="Hello";
	printf("%s  %s\n",a,p);
	return 0;
}
