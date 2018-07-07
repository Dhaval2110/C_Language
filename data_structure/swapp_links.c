//link swap

#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void end(ST **);
void print(ST *);
void rev(ST **);
main()
{
	ST *hptr=0;
	int r=0;
	char ch;
	do{
		end(&hptr);
		r++;
		printf("y/n?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("No of nodes %d\n",r);
	print(hptr);
	printf("-----------------------\n");
	rev(&hptr);
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
void rev(ST **p)
{
	ST *q=0,*r;
	while(*p)
	{
		r=q;
		q=*p;
		(*p)=(*p)->link;
		q->link=r;
	}
	*p=q;
}
void  print(ST *p)
{
	while(p)
	{
		printf("%d--->",p->roll);
		p=p->link;
	}

}
