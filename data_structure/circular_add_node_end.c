//circular add at end
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
void main()
{
	ST *hptr=0; 
	char ch;
	do{
		add_end(&hptr);
		//	c++;
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	//printf("Number of nodes=%d\n",c);
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
