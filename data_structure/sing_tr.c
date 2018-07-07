#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *next;
	struct st *pre;
}ST;
void end(ST **);
void print(ST *);
void delete(ST **,int);
main()
{
	char ch;
	ST *hptr=0;
	int n;
	do{
		end(&hptr);
		printf("Do you want to continue?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	printf("Delete no?\n");
	scanf("%d",&n);
	delete(&hptr,n);
	print(hptr);
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
void delete(ST **ptr,int n)
{
	int i=0;
	ST *temp,*p1=*ptr,*p2=*ptr;
	if(*ptr==0)
	{
		printf("No nodes is present\n");
		return;
	}
	while(i<n)
	{
		p1=p1->next;       //p1 at end of the linkedlist
		i++;
	}
	if(p1==0)
	{
		*ptr=p2->next;
		free(p2);
	}
	else
	{
		while(p1->next)
		{
			p1=p1->next;
			p2=p2->next;
		}
		temp=p2->next;
		p2->next=temp->next;
		p1->pre=temp->pre;
		free(temp);
		temp==0;
	}
}
void print(ST *p)
{
while(p)
{
printf("%d-->",p->roll);
p=p->next;
}
}
