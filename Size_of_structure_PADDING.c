 #include<stdio.h>
 #include<string.h>
 typedef struct st
{
	int a;
	char ch;
	float f;
	unsigned int i:5;
}ST;
main()
{
	
	printf("Size of %d",sizeof(ST));
}
