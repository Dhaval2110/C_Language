
#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	struct student *link; //self referencial structure pointer
}ST;
ST *hptr; //head pointer globally i.e. 0
void add_begin();
void rev_link(ST **,int);
void print();
void main()
{
	char ch,c=0;
	int n;
	do{
		add_begin();
		c++;
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Number of nodes=%d\n",c);
	print();
	printf("Number of nodes to reverse\n");
	scanf("%d",&n);
	printf("\n----------------------\n");
	rev_link(&hptr,n);
	print();
}
void add_begin()
{
	ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
	printf("Enter the roll no\n");
	scanf("%d",&new->roll);
	new->link=hptr; //copy the content of link in hptr
	hptr=new; //address of node to pointer
}
void rev_link(ST **p,int n)
{
	int i=1;
	ST *q,*r,*temp;
		while(*p)
		{	*p=(*p)->link;
			if(i==n)
		{
			temp=*p;
			i=1;
			*p=hptr;
			break;
		}i++;
		}
		q=temp;
		while(*p||i<n)
			{
			r=q;
			q=*p;
			*p=(*p)->link;
			q->link=r;
			i++;
		}
		*p=q;

}
	void print()
	{
		ST *p=hptr; //last node data revesal order
		while(p)
		{
			printf("%d \n",p->roll);
			p=p->link;//to previous node // travesing linked list
		}
	}
