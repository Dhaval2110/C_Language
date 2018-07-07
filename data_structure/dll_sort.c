#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	struct st *pre_link;
	int roll;
	struct st *next_link;
}ST;
void dll_sort(ST **);
void print(ST *);
main()
{
	ST *hptr=0;
	char ch;
	do{
		dll_sort(&hptr);
		printf("Do you want to continue?\n");
		scanf(" %c",&ch);
	}
	while((ch=='y') || (ch=='Y'));
	print(hptr);
}
void dll_sort(ST **ptr)
{
	ST *temp;
	//ST *old=*ptr->next_link;
	ST *new=(ST *)malloc(sizeof(ST));
	printf("Enter the roll no\n");
	scanf("%d",&new->roll);


	///logic////

	if(((*ptr)==NULL)|| ((*ptr)->roll > new->roll))
	{
		new->next_link=*ptr;
		new->pre_link=*ptr;
		*ptr=new;
	//	temp=ptr;
	}
	else
	{
		ST *old=*ptr;
		while((old->pre_link->roll < new->next_link->roll) && (old->pre_link!=NULL))
			new->next_link=old->pre_link;
		old->pre_link=new;
		new->pre_link=NULL;
	}
}
void print(ST *ptr)
{
	ST *temp;
	while(temp)
	{
		temp=ptr;
		printf("%d\n",ptr->roll);
		ptr=ptr->next_link;
	}
}
