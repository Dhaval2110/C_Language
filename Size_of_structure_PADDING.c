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
	ST arr[2]; //*p=NULL and then P++
    int sz = (char*)&arr[1] - (char*)&arr[0];
    printf("%d",sz);
    return 0;
}

