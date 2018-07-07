//rev data dll
#include<stdio.h>
#include<malloc.h>
typedef struct st
{
	struct st *pre_link;
	int roll;
	struct st *next_link;
}ST;
void add_end(ST **);
void print(ST *);
void rev_data(ST *);
main()
{
	ST *hptr=0;
	char ch;
	do
	{
		add_end(&hptr);
		printf("Do you want to continue\n");
		scanf(" %c",&ch);
	}
	while((ch=='y')||(ch=='Y'));
	print(hptr);
	rev_data(hptr);
	printf("After-------\n");
	print(hptr);
}
void add_end(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST));
	printf("Enter roll\n");
	scanf("%d",&new->roll);
	if((*ptr)==NULL)
	{
		new->pre_link=*ptr;
		new->next_link=*ptr;
		*ptr=new;
	}
	else
	{
		ST *old = *ptr;
		while(old->next_link)
			old=old->next_link;

		old->next_link = new;
		new->pre_link=old;
		new->next_link=NULL;
	}
}
void rev_data(ST *ptr)
{
	int i,j,n=0,temp_roll;
	ST *temp=ptr;
	while(temp)
	{
		++n;
		temp=temp->next_link;
	}
	ST **a=(ST **)malloc(sizeof(ST *)*n);
	for(i=0,temp=ptr;i<n;i++,temp=temp->next_link)
		a[i]=temp;

	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp_roll=a[i]->roll;
		a[i]->roll=a[j]->roll;
		a[j]->roll=temp_roll;
	}
}

void print(ST *ptr)
{
	ST *temp;
	while(ptr)
	{
		temp=ptr;
		printf("%d\n",ptr->roll);
		ptr=ptr->next_link;
	}
}

