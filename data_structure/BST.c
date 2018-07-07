#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
	struct BST *left_link;
	int roll;
	struct BST *right_link;
}TREE;
void add_tree(TREE **ptr,int n); //int n i.e. root number
TREE * search(TREE *ptr,int n); //address of number 
void post_order(TREE *ptr);//using hptr
void pre_order(TREE *ptr);
void in_order(TREE *ptr);
void delete(TREE *ptr,int n);
TREE *parent;
main()
{
	int num;
	char ch;
	TREE *hptr=0;
	do{
		printf("Enter the number\n");
		scanf("%d",&num);
		add_tree(&hptr,num);
		printf("Do you want to continue\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("post_order\n");
	post_order(hptr);
	printf("pre_order\n");
	pre_order(hptr);
	printf("in_order\n");
	in_order(hptr);
	printf("\n");


	TREE *ptr;
	printf("Do you want to continue\n");
	scanf(" %c",&ch);
	if((ch=='y') || (ch=='Y'))
	{
		printf("Enter the number\n");
		scanf("%d",&num);
		ptr=search(hptr,num); //address of node
		if(ptr)
			printf("Number is presented at %u add\n",(unsigned)ptr);
		else
			printf("Number is not presented\n");
	}

	printf("Enter the number to delete\n");
	scanf("%d",&num);
	delete(hptr,num);
	printf("post_order\n");
	post_order(hptr);
	printf("pre_order\n");
	pre_order(hptr);
	printf("in_order\n");
	in_order(hptr);
	printf("\n");

}
	void add_tree(TREE **ptr,int n)
	{
		if(*ptr==NULL)
		{
			*ptr=(TREE *)malloc(sizeof(TREE));
			(*ptr)->roll=n;
			(*ptr)->left_link=(*ptr)->right_link=NULL;
		}
		else if((*ptr)->roll>n)
			add_tree(&(*ptr)->left_link,n);
		else
			add_tree(&(*ptr)->right_link,n);
	}


	TREE *search(TREE *ptr,int n)
	{
		if(ptr==0)
			return 0;
		if(ptr->roll==n)
			return ptr;
		else if(ptr->roll > n)
		{
			parent=ptr;
			return search(ptr->left_link,n);  //recursion
		}
		else
		{
			parent=ptr;
			return search(ptr->right_link,n);  //recursion
		}
	}
/////////////////////////////
	void delete(TREE *ptr,int n)
	{
		TREE *q,*p,*r;
		q=search(ptr,n);
		if(q==0)
		{
			printf("Number is not presented\n");
			return;
		}
		p=parent;
		if((q->left_link!=NULL) && (q->right_link  != NULL))
		{
			r=q->left_link;
			while(r->right_link)
			{
				p=r;
				r=r->right_link;
			}
			q->roll=r->roll;
			q=r;
		}

		if((q->left_link==NULL) && (q->right_link  == NULL))
		{
			if(q==p->left_link)
				p->left_link=0;
			else
				p->right_link=0;

			free(q);
			q=NULL;
			return;
		}

		if((q->left_link!=NULL) && (q->right_link  == NULL))
		{
			if(q==p->left_link)
				p->left_link=q->left_link;
			else
				p->right_link=q->left_link;

			free(q);
			q=NULL;
			return;
		}

		if((q->left_link==NULL) && (q->right_link  != NULL))
		{
			if(q==p->left_link)
				p->left_link=q->right_link;
			else
				p->right_link=q->right_link;

			free(q);
			q=NULL;
			return;
		}
	}

		void post_order(TREE *ptr)
		{
			if(ptr !=NULL ){
				post_order(ptr->left_link);
				post_order(ptr->right_link);
				printf("%d-->",ptr->roll);
			}
		}
		void pre_order(TREE *ptr)
		{
			if(ptr!=NULL){
				printf("%d-->",ptr->roll);
				pre_order(ptr->left_link);
				pre_order(ptr->right_link);
			}
		}
		void in_order(TREE *ptr)
		{
			if(ptr!=NULL){
		
			in_order(ptr->left_link);
			printf("%d-->",ptr->roll);
			in_order(ptr->right_link);
			}
		}
