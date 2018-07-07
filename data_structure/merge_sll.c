#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	char name[100];
	float marks;
	struct student *link; //self referencial structure pointer
}ST;
void add_end1(ST **);
void add_end2(ST **);
void print1(ST *);
void print2(ST *);
void main()
{		
		char ch,c1=0,c2=0,c3;
		ST *hptr1=0;
		ST *hptr2=0;
		ST *hptr3=0; 
	do{
		add_end1(&hptr1);
		c1++;
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Number of nodes=%d\n",c1);
		print1(hptr1);

	do{
		add_end2(&hptr2);
		c2++;
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Number of nodes=%d\n",c2);
		print2(hptr2);
}
void add_end1(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
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
void add_end2(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
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

void merge(ST **ptr)
{
if(c1>c2)
{
ST *new=(ST *)malloc(sizeof(ST)*c1); // allocating to pointer p=malloc type
ptr=hptr1;
ptr->link=hptr2;

}





}

void print1(ST *ptr)
{
	while(ptr)
	{
		printf("%d\n",ptr->roll);
		ptr=ptr->link;//to previous node // travesing linked list
	}
}
void print2(ST *ptr)
{
	while(ptr)
	{
		printf("%d\n",ptr->roll);
		ptr=ptr->link;//to previous node // travesing linked list
	}
}
