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
//ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
void add_begin();
void print();
//void node(ST **,int);
void main()
{
	char ch;
	int n=0;
	do{
		add_begin();
		n++;
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Number of nodes=%d\n",n);
	//print();
//		node(&hptr,n);
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
void node(ST **ptr,int c)
{
ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
int i=1,n;
n=c/2;
ptr=hptr;
while(i++<c)
ptr=ptr->link;
new->link=ptr->link;
ptr->link=new;
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
