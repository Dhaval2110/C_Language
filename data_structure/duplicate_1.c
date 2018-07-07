//unsorted
#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	struct student *link; //self referencial structure pointer
}ST;
void add_begin(ST **);
void duplicate(ST *);
void print(ST *);
void main()
{
	int n=0;
	ST *hptr=0;
	char ch;
	do{
		add_begin(&hptr);
		n++;
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("No of nodes %d\n",n);
	print(hptr);
	duplicate(hptr);
	printf("---------\n");
	print(hptr);
}
void add_begin(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
	ST *old=*ptr;
	printf("Enter the roll no\n");
	scanf("%d",&new->roll);
	if((*ptr==0))
	{
		new->link=*ptr;
		*ptr=new;
	}
	else
	{
		old=*ptr;
		while(old->link!=0)
			old=old->link;

		new->link=old->link;
		old->link=new;
	}
}
void duplicate(ST *p)
{
	ST *p1,*p2,*dup;
	p1=p;
	while(p1 && p1->link)
	{
		p2=p1;
		while(p2->link)
		{
			if(p1->roll==p2->link->roll)
			{
				dup=p2->link;
				p2->link=p2->link->link;
				free(dup);
			}
			else
				p2=p2->link;
		}
		p1=p1->link;
	}
}

void print(ST *p)
{
	while(p)
	{
		printf("%d--->\n",p->roll);
			p=p->link;
	}
}
