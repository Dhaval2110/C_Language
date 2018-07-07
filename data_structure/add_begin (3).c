//add_end
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void begin(ST **);
void print(ST *);
main()
{
	ST *hptr=0;
	char ch;
	do{
		begin(&hptr);
		printf("Do you wanat to contine\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
}
void begin(ST **ptr)
{
	ST *new=(ST*)malloc(sizeof(ST));
	printf("ENter the roll\n");
	scanf("%d",&new->roll);

	new->link=*ptr;
	*ptr=new;
}
void print(ST *p)
{
	while(p)
	{
		printf("%d->\n",p->roll);
		p=p->link;
	}
}
