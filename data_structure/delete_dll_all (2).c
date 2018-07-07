#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *next;
	struct st *pre;
}ST;
void end(ST **);
void print(ST *);
void delete(ST **);
main()
{
	char ch;
	ST *hptr=0;
	int n;
	do{
		end(&hptr);
		printf("Do you want to continue?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	printf("\n-----------------\n");
	delete(&hptr);
	print(hptr);
}
void end(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST));
	printf("ENter the roll\n");
	scanf("%d",&new->roll);
	ST *old=*ptr;
	if(*ptr==0)
	{
		new->next=(*ptr);
		new->pre=(*ptr);
		*ptr=new;
	}
	else
	{
		ST *old=*ptr;
		while(old->next)
			old=old->next;
		new->next=old->next;
		new->pre=old;
		old->next=new;
	}
}
void delete(ST **ptr)
{
ST *temp=*ptr;
while(temp)
{
*ptr=temp->next;
free(temp);
temp=*ptr;
}
}
void print(ST *p)
{
while(p)
{
printf("%d-->",p->roll);
p=p->next;
}
}
