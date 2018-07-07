//rev links
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *next;
	struct st *pre;
}ST;
void end(ST **);
void rev(ST **);
void print(ST *);
main()
{
	char ch;int c=0;
	ST *hptr=0;
	do{
		end(&hptr);
		printf("Do you want to continue?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	printf("\\\\\\\\\\ \n");

	rev(&hptr);
	print(hptr);
}
void rev(ST **p)
{
ST *q=0,*r;
while(*p)
{
r=q;
q=*p;
(*p)=(*p)->next;
q->next=r;
}
q=*p;
}
void end(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST));
	printf("ENter the roll\n");
	scanf("%d",&new->roll);
	ST *old=*ptr;
	if(*ptr==0)
	{
		new->next=(*ptr);
		new->pre=(*ptr);
		*ptr=new;
	}
	else
	{
		ST *old=*ptr;
		while(old->next)
			old=old->next;
		new->next=old->next;
		new->pre=old;
		old->next=new;
	}
}
void print(ST *p)
{
	while(p)
	{printf("%d-->",p->roll);
		p=p->next;
	}
}
