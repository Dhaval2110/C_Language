#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	char name[100];
	float marks;
	struct student *link; //self referencial structure pointer
}ST;
ST *hptr; //head pointer globally i.e. 0
void add_begin();
void print();
void delete(ST **,int);
void main()
{
	char ch,c=0;
	int n;
	do{
		add_begin();
		c++;
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Number of nodes=%d\n",c);
	print();
	printf("Enter the roll no you want to delete\n");
	scanf("%d",&n);
	delete(&hptr,n);
	print();
}
void add_begin()
{
	ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
	printf("Enter the roll no\n");
	scanf("%d",&new->roll);
	printf("Enter the name\n");
	scanf("%s",new->name);
	printf("Enter the marks\n");
	scanf("%f",&new->marks);
	new->link=hptr; //copy the content of link in hptr
	hptr=new; //address of node to pointer
}
void delete(ST **ptr,int n)
{
	ST *temp_ptr=*ptr;
	if(*ptr==NULL)
	{
		printf("No nodes are present\n");
		return;
	}
	if((*ptr)->roll==n)
	{
		(*ptr)=(*ptr)->link;
		free(temp_ptr);
		temp_ptr=NULL;
		return;
	}
	else
	{
		ST *previous_ptr=temp_ptr;
		temp_ptr=temp_ptr->link;

		while(temp_ptr)
		{
			if(temp_ptr->roll == n)
			{
				previous_ptr->link=temp_ptr->link;
				free(temp_ptr);
				temp_ptr=NULL;
				return;
			}
			else
				previous_ptr=temp_ptr;
			temp_ptr=temp_ptr->link;
		}
	}
	if(temp_ptr==NULL)
		printf("Roll number is not present\n");
}
void print()
{
	ST *p=hptr; //last node data revesal order
	while(p)
	{
		printf("%d %s %f\n",p->roll,p->name,p->marks);
		p=p->link;//to previous node // travesing linked list
	}
}
