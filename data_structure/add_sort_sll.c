#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	struct student *link; //self referencial structure pointer
}ST;
void add_begin(ST **);
void print(ST *);
void main()
{
	ST *hptr=0;
	char ch;
		do{
		add_begin(&hptr);
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
		print(hptr);
}
void add_begin(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
	ST *old=*ptr;
	printf("Enter the roll no\n");
	scanf("%d",&new->roll);
	if((*ptr==0)||(new->roll)<((*ptr)->roll))
	{
	new->link=*ptr;
	*ptr=new;
	}
	else
	{
	old=*ptr;
	while(((old->link->roll)<(new->roll)) &&(old->link!=0))
	old=old->link;
	
	new->link=old->link;
	old->link=new;
	}
}
void print(ST *ptr)
{
while(ptr)
{
printf("%d\n",ptr->roll);
ptr=ptr->link;
}



}
