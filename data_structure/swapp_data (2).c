//swap_data

#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void end(ST **);
void print(ST *);
void rev(ST *,int);
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
	rev(hptr,r);
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
void rev(ST *ptr,int n)
{
int i,j,tep;
ST **a=(ST **)malloc(sizeof(ST *)*n);
ST *temp=ptr;
for(i=0,temp=ptr;i<n;i++,temp=temp->link)
a[i]=temp;

for(i=0,j=n-1;i<j;i++,j--)
{
tep=a[i]->roll;
a[i]->roll=a[j]->roll;
a[j]->roll=tep;
}

}
void print(ST *p)
{
	while(p)
	{
		printf("%d-->",p->roll);
		p=p->link;
	}
}
