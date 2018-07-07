#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	struct student *link; //self referencial structure pointer
}ST;
int add_node(ST **);
void print(ST *);
void add_middle(ST **p,int k);
void main()
{
	int n,k,c;
	char ch;	ST *hptr=0;
	do{
		c=add_node(&hptr);
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Number of nodes=%d\n",c);
		k=c/2;
		add_middle(&hptr,k);
		print(hptr);
}
int add_node(ST **ptr)
{int c=0;
	c++;
	ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
	printf("Enter the roll no\n");
	scanf("%d",&new->roll);
	new->link=*ptr; //copy the content of link in hptr
	*ptr=new; //address of node to pointer
	return c;
}
void add_middle(ST **ptr,int k)
{
ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
int i=0;
	printf("Enter the roll no\n");
	scanf("%d",&new->roll);
while(++i<k)
*ptr=(*ptr)->link;        //update ptr upto middle of the linked list

new->link=(*ptr)->link;    //update new link as after node
(*ptr)->link=new;          //put new in ptr link
}
void print(ST *p)
{
	while(p)
	{
		printf("%d\n",p->roll);
		p=p->link;//to previous node // travesing linked list
	}
}
