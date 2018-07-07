//delete node
#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	char name[100];
	float marks;
	struct student *link; //self referencial structure pointer
}ST;
void add_end(ST **);
void print(ST *);
void delete(ST **,int);
void main()
{
	ST *hptr=0; 
	char ch;
	int c;
	do{
		add_end(&hptr);
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	printf("Number of node to delete");
	scanf("%d",&c);
	delete(&hptr,c);
	print(hptr);
}
void add_end(ST **ptr)
{
	static ST *last;
	ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
	printf("Enter the roll no\n");
	scanf("%d",&new->roll);

	if(*ptr==NULL)
	{
		new->link=new;
		last=new;
		*ptr=new;
	}
	else
	{
		new->link=last->link;
		last->link=new;
		last=new;
	}
}

void delete(ST **ptr,int n)
{
	static ST *last;
	ST *temp=*ptr;
	if(*ptr==0)
	{
		printf("No nodes are present\n");
		return;
	}

	if((*ptr)->roll==n)
	{
		*ptr=(*ptr)->link;
		last=*ptr;
		free(temp);
		temp=NULL;
		return;
	}
	else
	{
		ST *pre=temp;
		temp=temp->link;
		while(temp)
		{
			if(temp->roll == n)
			{
				pre->link=temp->link;
				last=pre;
				free(temp);
				temp=NULL;
				return;
			}
			else
			{
				pre=temp;
				temp-temp->link;
				last=temp;
			}}
	}}





void print(ST *p)
{
	ST *temp=p; //last node data revesal order
	while(temp)
	{
		printf("%d \t",temp->roll);
		temp=temp->link;//to previous node // travesing linked list
		if(temp==p)
			break;
	}

}
