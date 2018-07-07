
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void end(ST **);
void print(ST *);
void rev(ST **,int n);
main()
{
	ST *hptr=0;
	int r;
	char ch;
	do{
		end(&hptr);
		printf("y/n?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
	print(hptr);
	printf("-----------------------\n");
	printf("Enter the range\n");
	scanf("%d",&r);
	rev(&hptr,r);
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
void rev(ST **p,int n)
{
int i=1;
ST *q,*r,*t;
while(*p)
{
*p=(*p)->link;
if(i==n)
{
t=*p;
i=1;
//*p=*p;
break;
}
i++;
}
q=t;
while(((*p)==0)||i<n)
{
r=q;
q=*p;
*p=(*p)->link;
q->link=r;
i++;
}
*p=q;
}
void print(ST *p)
{
while(p)
{
printf("%d-->",p->roll);
p=p->link;
}
}
