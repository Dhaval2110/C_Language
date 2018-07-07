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
void main()
{
	char ch,c=0;
	do{
		add_begin();
		c++;
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Number of nodes=%d\n",c);
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
void print()
{
	ST *p=hptr; //last node data revesal order
	while(p)
	{
		printf("%d %s %f\n",p->roll,p->name,p->marks);
		p=p->link;//to previous node // travesing linked list
	}
}
