//add end cirscular
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void end(ST **);
void print(ST *);
main()
{
	ST *hptr=0;
	char ch;
	do{
		end(&hptr);
		printf("y/n?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
}
void end(ST **ptr)
{
        static ST *last;
	ST *new=(ST *)malloc(sizeof(ST));
	printf("Enter the roll\n");
	scanf("%d",&new->roll);

	if(*ptr==NULL)
	{
		new->link=new;
		last=new;
		*ptr=new;
	}
	else
	{
       //		ST *old=*ptr;
//		while(old->link!=NULL)
//			old=old->link;

	
		new->link=last->link;
		last->link=new;
		last=new;

	}
}
void print(ST *p)
{
	while(p)
	{
		printf("%d-->",p->roll);
		p=p->link;
	}
}
