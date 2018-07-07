//add_middle
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
int end(ST **);
void middle(ST **,int n);
void print(ST *);
main()
{
	ST *hptr=0;int n=0,k;
	char ch;
	do{
		n=end(&hptr);
		printf("y/n?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	k=n/2;
	middle(&hptr,k);
	print(hptr);
}
int end(ST **ptr)
{
	int c=0;
	c++;
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
		
		return c;
	}
}
void middle(ST **ptr,int n)
{
int i=0;
	ST *new=(ST *)malloc(sizeof(ST));

	printf("Enter the roll\n");
	scanf("%d",&new->roll);
while(i++ < n)
*ptr=(*ptr)->link;

new->link=(*ptr)->link;
(*ptr)->link=new;




}
void print(ST *p)
{
	while(p)
	{
		printf("%d-->",p->roll);
		p=p->link;
	}
}
