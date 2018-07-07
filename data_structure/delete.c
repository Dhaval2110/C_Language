//delete
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void end(ST **);
void print(ST *);
void delete(ST **,int );
main()
{
	ST *hptr=0;int n;
	char ch;
	do{
		end(&hptr);
		printf("y/n?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	printf("enter the roll no you want to delete\n");
	scanf("%d",&n);
	delete(&hptr,n);
	print(hptr);	
}
void end(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST));
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
void delete(ST **ptr,int n)
{
	ST *temp=*ptr;
	if(*ptr==0)
	{
		printf("no nodes present\n");
		return;
	}
	else if((*ptr)->roll == n)
	{
		*ptr=(*ptr)->link;
		free(temp);
		temp=NULL;
		return;
	}
	else
	{
		ST *old=temp;
		temp=temp->link;
		while(temp)
		{
			if(temp->roll == n)
			{
				old->link=temp->link;
				free(temp);
				temp=0;
				return;
			}
			else
			{
				old=temp;
				temp=temp->link;
			}

			if(temp==NULL)
				printf("Roll no is not present\n");
		}
	}
}
void print(ST *p)
{
	while(p)
	{
		printf("%d-->",p->roll);
		p=p->link;
	}
}
