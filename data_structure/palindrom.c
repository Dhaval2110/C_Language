#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void end(ST **);
void print(ST *);
void palindrom(ST *,int n);
main()
{
	ST *hptr=0;int n=0;
	char ch;
	do{
		end(&hptr);
		n++;
		printf("y/n?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	palindrom(hptr,n);
}
void palindrom(ST *ptr,int n)
{
ST *t1,*t2;
t1=t2=ptr;
int c,i,j,flag=0;
for(i=0;i<n;i++)
{
t2=ptr;
for(j=0;j<n-i-1;j++)
t2=t2->link;
if(t1->roll!=t2->roll)
{
flag=1;
//break;
}
t1=t1->link;
}
if(flag==1)
printf("Not\n");
else
printf("Yes\n");
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
void print(ST *p)
{
	while(p)
	{
		printf("%d-->",p->roll);
		p=p->link;
	}
}
