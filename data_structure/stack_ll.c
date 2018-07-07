//stack ll
#include<stdio.h>
typedef struct st
{
	struct st *link;
	int roll;
}ST;
int stk[5],ind_var=0;
void push(ST **);
void pop(ST **);
void display(ST *);
main()
{	
	ST *hptr=0;
	int op,num;
	for(;;)
	{
		printf("Enter the option\n");
		printf("1]push 2]pop 3]display 4]exit\n");
		scanf("%d",&op);

		switch(op)
		{
			case 1:if(ind_var<5)
			       {
				       push(&hptr);	
			       }
			       else
				       printf("Stack Overflow\n");
			       break;
			case 2:if(ind_var>0)
				       pop(&hptr);
			       else
				       printf("Stack Underflow\n");
			       break;
			case 3:display(hptr);
			       break;
			case 4:return;
			default:printf("Invalid Option..\n");

		}
	}
}
void push(ST **p)
{
	ST *new;
	(p)=(ST*)malloc(sizeof(ST));
	int a;
	printf("Ent the data\n");
	scanf("%d",&a);

	if(*p==NULL)
	{
		*p->roll=a;
		*p->link=NULL;
	}
	else
	{
		new=(ST*)malloc(ST);
		new->link=*p;
		new->roll=a;
		*p=new;
	}

}
void pop(ST **stack)
{
	ST *old;
	old=*stack;
	if((*stack)->link!=NULL)
		*stack=(*stack)->link;
	else
		*stack=NULL;
	free(old);
}
}
void display(ST *p)
{
	if(p==NULL)
		printf("No element present\n");
	else
	{while(p!=NULL)
		{
			printf("%d",p->roll);
			p=p->link;
		}
	}
}

