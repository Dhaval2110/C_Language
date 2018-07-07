#include<stdio.h>
#include<stdlib.h>
typedef struct student 
{
	int roll;
	struct student *link; //self referencial structure pointer
}ST;
void add_end(ST **);
void print(ST *);
void rev_data(ST *,int);
void main()
{
	ST *hptr=0; 
	char ch,c=0;
	int n;
	do{
		add_end(&hptr);
		c++;
		printf("Do you want to continue...\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	printf("Number of nodes=%d\n",c);
	print(hptr);
	rev_data(hptr,c);
	print(hptr);
}
void add_end(ST **ptr)
{
	ST *new=(ST *)malloc(sizeof(ST)); // allocating to pointer p=malloc type
	printf("Enter the roll no\n");
	scanf("%d",&new->roll);

	if(*ptr==0)
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

void rev_data(ST *ptr,int n)
{
int i,j,temp_roll;
ST *temp=ptr;
ST **a=(ST **)malloc(sizeof(ST*)*n);

for(i=0,temp=ptr;i<n;i++,temp=temp->link)
a[i]=temp;

for(i=0,j=n-1;i<j;i++,j--)
{
temp_roll=a[i]->roll;
a[i]->roll=a[j]->roll;
a[j]->roll=temp_roll;
}
}
void print(ST *p)
{
	while(p)
	{
		printf("%d\n" ,p->roll);
		p=p->link;//to previous node // travesing linked list
	}
}
