//sll swap adjacent

#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void add_end(ST **);
void print(ST *);
void swap(ST **);
main()
{
	ST *hptr=0;
	char ch;
	do{
		add_end(&hptr);
		printf("Do you want to continue?\n");
		scanf(" %c",&ch);
	}
	while((ch=='y') || (ch=='Y'));
		print(hptr);
	swap(&hptr);
	printf("\n---------\n");
	print(hptr);
}
void add_end(ST **ptr)
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

		if((second==NULL) || (second->link==NULL))
			return;

		first->link=second->link;
		first=second;
		second=second->link;

		first->link=second->link;
		second->link=first;
	}
}

void print(ST *ptr)
{
	while(ptr)
	{
		printf("%d\n",ptr->roll);
		ptr=ptr->link;
	}
}
