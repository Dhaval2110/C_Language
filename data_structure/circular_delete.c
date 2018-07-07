#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void end(ST **);
void delete(ST **,int);
void print(ST *);
main()
{
	char ch;
	ST *hptr=0;
	int n;
	do{
		end(&hptr);
		printf("Do you want to contine?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
//	print(hptr);
	printf("Enter the number\n");
	scanf("%d",&n);
	delete(&hptr,n);
	print(hptr);
}
void end(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST));
       static ST *last;
	printf("Enter the roll\n");
	scanf("%d",&new->roll);

	if(*ptr==0)
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
	while(p)
	{
		printf("%d",p->roll);
		p=p->link;
	}
}
void delete(ST **ptr,int n)
{
	ST *temp=*ptr;
       static ST *last;
	if(*ptr==0)
	{
		printf("No nodes are present\n");
		return;
	}
	if((*ptr)->roll==n)
	{
		*ptr=(*ptr)->link;
		last=*ptr;
		free(temp);
		temp==0;
		return;
	}
	else
	{
		ST *pre=temp;
		temp=temp->link;
		while(temp)
		{
			if(temp->roll==n)
			{
				pre->link=temp->link;
				last=pre;
				free(temp);
				temp==0;
				return;
			}
			else
			{
				pre=temp;
				temp=temp->link;
				last=temp;
			}
		}
	}
}
