//dll_rev_data
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *next;
	struct st *pre;
}ST;
void end(ST **);
void rev(ST *,int);
void print(ST *);
main()
{
	char ch;int c=0;
	ST *hptr=0;
	do{
		end(&hptr);
		c++;
		printf("Do you want to continue?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	rev(hptr,c);
	print(hptr);
}
void rev(ST *ptr,int n)
{
	int t,i,j;
	ST *temp=ptr;
	ST **a=(ST **)malloc(sizeof(ST *)*n);
	for(i=0,temp=ptr;i<n;i++,temp=temp->next)
		a[i]=temp;

	for(i=0,j=n-1;i<j;i++,j--)
	{
		t=a[i]->roll;
		a[i]->roll=a[j]->roll;
		a[j]->roll=t;
	}
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
void print(ST *p)
{
	while(p)
	{printf("%d-->",p->roll);
		p=p->next;
	}
}
