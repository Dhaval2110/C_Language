//adjacent swap
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void end(ST **);
void print(ST *);
void swap(ST **);
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
	printf("\n-----------------\n");
	swap(&hptr);
	print(hptr);
}
void end(ST **ptr)
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
void swap(ST **ptr)
{
ST *first=*ptr,*second=(*ptr)->link;
first->link=second->link;
second->link=first;
*ptr=second;

while(1)
{
second=first->link;

if((second==0)||(second->link==0))
return;


first->link=second->link;
first=second;
second=second->link;


first->link=second->link;
second->link=first;
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

