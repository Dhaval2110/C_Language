//dll link revers 

#include<stdio.h>
#include<malloc.h>
typedef struct st
{
	struct st *pre_link;
	int roll;
	struct st *next_link;
}ST;
void add_end(ST **);
void print(ST *);
void rev_link(ST **);
main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_end(&hptr);
		printf("Do you want to continue\n");
		scanf(" %c",&ch);
	}
	while((ch=='y')||(ch=='Y'));
	print(hptr);
	rev_link(&hptr);
	printf("After-------\n");
	print(hptr);
}
void add_end(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST));
	printf("Enter roll\n");
	scanf("%d",&new->roll);
	if((*ptr)==NULL)
	{
		new->pre_link=*ptr;
		new->next_link=*ptr;
		*ptr=new;
	}
	else
	{
		ST *old = *ptr;
		while(old->next_link)
			old=old->next_link;

		old->next_link = new;
		new->pre_link=old;
		new->next_link=NULL;
	}
}
void rev_link(ST **p)
{
ST *q=0,*r;
while(*p)
{
r=q;
q=*p;
*p=(*p)->next_link;
q->next_link=r;
}
*p=q;
}
void print(ST *ptr)
{
	ST *temp;
	while(ptr)
	{
		temp=ptr;
		printf("%d\n",ptr->roll);
		ptr=ptr->next_link;
	}
}

