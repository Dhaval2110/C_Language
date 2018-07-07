//sll single traverse delete
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void end(ST **);
void print(ST *);
void delete(ST **,int);
main()
{
	ST *hptr=0;int n;
	char ch;
	do{
		end(&hptr);
	//	n++;
		printf("y/n?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	printf("Enter the no delete\n");
	scanf("%d",&n);
	printf("\n------------\n");
	delete(&hptr,n);
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
void print(ST *p)
{
	while(p)
	{
		printf("%d-->",p->roll);
		p=p->link;
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
		p1=p1->link;       //p1 at end of the linkedlist
		i++;
	}
	if(p1==0)
	{
		*ptr=p2->link;
		free(p2);
	}
	else
	{
		while(p1->link)
		{
			p1=p1->link;
			p2=p2->link;
		}
		temp=p2->link;
		p2->link=temp->link;
	
	//	p1->pre=temp->pre;
		free(temp);
		temp==0;
	}
}
