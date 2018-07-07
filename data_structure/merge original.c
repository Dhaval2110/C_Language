//merge in linkedlist
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
ST *hptr;
ST *hptr1;
ST *hptr2;
void print(ST *);
void end1(ST **);
void print1(ST *);
void end2(ST **);
void print2(ST *);
void merge(ST *,ST *);
main()
{
	char ch;
	do{
		end1(&hptr1);
		printf("y/n?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print1(hptr1);
	printf("\n------------------\n");
	do{
		end2(&hptr2);
		printf("y/n?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print2(hptr2);
	printf("\n----------------\n");
	merge(hptr1,hptr2);
	print(hptr);
}
void merge(ST *p1,ST *p2)
{
	ST *o1,*o2,*c1,*c2;
	o1=p1;
	o2=p2;
	c1=o1->link;
	c2=o2->link;
	hptr=p1;
	while(1)
	{
		o1->link=o2;
		if(c1)
		{
			o1=c1;
			c1=c1->link;
		}
		else
		{break;
		}
		o2->link=o1;
		if(c2)
		{
			o2=c2;
			c2=c2->link;
		}
		else
		{break;}

	}
}
void end2(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST));
	printf("Enter the roll\n");
	scanf("%d",&new->roll);

	if(*ptr==NULL)
	{
		new->link=*ptr;
		*ptr=new;
	}
	else
	{
		ST *old=*ptr;
		while(old->link!=NULL)
			old=old->link;

		new->link=old->link;
		old->link=new;
	}
}
void end1(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST));
	printf("Enter the roll\n");
	scanf("%d",&new->roll);

	if(*ptr==NULL)
	{
		new->link=*ptr;
		*ptr=new;
	}
	else
	{
		ST *old=*ptr;
		while(old->link!=NULL)
			old=old->link;

		new->link=old->link;
		old->link=new;

	}
}
void print1(ST *p)
{
	while(p)
	{
		printf("%d-->",p->roll);
		p=p->link;
	}
}
void print2(ST *p)
{
	while(p)
	{
		printf("%d-->",p->roll);
		p=p->link;
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
