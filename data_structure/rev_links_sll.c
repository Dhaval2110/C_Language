#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	struct student *link; //self referencial structure pointer
}ST;
void add_end(ST **);
void print(ST *);
void rev_links(ST **);
void main()
{
	ST *hptr=0; 
	char ch,c=0;
	int n;
	do{
		add_end(&hptr);
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	rev_links(&hptr);
	print(hptr);
}
void add_end(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
	printf("Enter the roll no\n");
	scanf("%d",&new->roll);

	if(*ptr==0)
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

void rev_links(ST **p)
{
ST *q=0,*r;
while(*p)
{
r=q;      //r=0 
q=*p;     //put data of node in q
*p=(*p)->link;  // updtae node
q->link=r; //putting 0 in link for termination
}
*p=q;     //in the end after swapping hptr holds last node address
}


void print(ST *p)
{
	while(p)
	{
		printf("%d\n" ,p->roll);
		p=p->link;//to previous node // travesing linked list
	}
}

