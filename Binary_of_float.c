#include<stdio.h>
#include<conio.h>
//1. Union Method 
//union u
//{
//	int *p;
//	float f;
//};
main()
{
	int k;
//	union u u1;
//	u1.f=3.5;
//	u1.p=(int *)&u1.f;
//	for(k=31;k>=0;k--)
//	printf("%d ",*u1.p>>k&1);
//2. Pointer method
	float f=3.5;
	int *p=(int *)&f;   //typecasting for better experience
	for(k=31;k>=0;k--)
	printf("%d ",*p>>k&1);
}
