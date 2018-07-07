//delete dll
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
	if(*ptr==0)
	{
		printf("No nodes are present\n");
		return;
	}
	if((*ptr)->roll==n)
	{
		ST *temp=*ptr;
		*ptr=(*ptr)->next;
		if(*ptr)
		(*ptr)->pre=0;
		free(temp);
		temp=0;
		return;
	}
	else
	{
		ST *temp;;
		temp=(*ptr)->next;
		while(temp)
		{
			if(temp->roll == n)
			{
				temp->pre->next=temp->next;
				//prev->next=temp->next;
				if(temp->next)
				temp->next->pre=temp->pre;
				free(temp);
				temp=0;
			}
			else
			{
				temp=temp->next;
			}
		}
	}
}
void print(ST *p)
{
	while(p)
	{printf("%d-->",p->roll);
		p=p->next;
	}
}
