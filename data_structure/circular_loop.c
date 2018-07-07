
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int roll;
	struct st *link;
}ST;
void end(ST **);
void print(ST *);
void detect(ST *);
main()
{
	ST *hptr=0;
	char ch;
	do{
		end(&hptr);
		printf("y/n?\n");
		scanf(" %c",&ch);
	}while((ch=='y')||(ch=='Y'));
//	print(hptr);
	detect(hptr);
}
void detect(ST *ptr)
{
/*ST *p=ptr;
while(ptr)
{
if(p==ptr)
{printf("Loop is detected\n");
return;}
else
ptr=ptr->link;
}
printf("No loop detected\n");
*/
ST *temp,*f=ptr,*s=ptr->link;
while(1)
{
f=f->link;
f=f->link;
s=s->link;
}
if(f==s)
printf("Loop is present\n");
else
printf("Not \n");
}
void end(ST **ptr)
{
        static ST *last;
	ST *new=(ST *)malloc(sizeof(ST));
	printf("Enter the roll\n");
	scanf("%d",&new->roll);

	if(*ptr==NULL)
	{
		new->link=new;
		last=new;
		*ptr=new;
	}
	else
	{
       //		ST *old=*ptr;
//		while(old->link!=NULL)
//			old=old->link;

	
		new->link=last->link;
		last->link=new;
		last=new;

	}
}
void print(ST *p)
{
	while(p)
	{ int i=0;
		if(i<10)
		{printf("%d-->",p->roll);
		p=p->link;
		i++;}

	}
}
