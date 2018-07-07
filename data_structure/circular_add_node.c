// circular linkedlist
#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	char name[100];
	float marks;
	struct student *link; //self referencial structure pointer
}ST;
void add_begin(ST **);
void print(ST *);
void main()
{
	ST *hptr=0; 
	char ch=0;
	do{
		add_begin(&hptr);
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
}
void add_begin(ST **ptr)
{
	static ST *last;
	ST *new=(ST *)malloc(sizeof(ST));
	printf("Enter the roll\n");
	scanf("%d",&new->roll);
	if(*ptr==0)
	{
		new->link=new;
		last=new;
	}
	else
	{
		new->link=*ptr;
		last->link=new;
	}
	*ptr=new;
}
void print(ST *ptr)
{
	ST *temp=ptr;
	while(temp)
	{
		printf("%d\t",temp->roll);
		temp=temp->link;
		if(temp==ptr)
			break;
	}
}
