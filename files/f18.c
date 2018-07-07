
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int rollno;
	char name[100];
	float marks;
}ST;
main()
{
	ST s1={10,"abc",33.5};
	FILE *fp;
	fp=fopen("data","r");
	fscanf(fp,"%d %s %f\n",&s1.rollno,s1.name,&s1.marks);
	printf("%d %s %f\n",s1.rollno,s1.name,s1.marks);
}
