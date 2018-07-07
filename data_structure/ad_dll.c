//dll swap
#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
int roll;
struct st *next;
struct st *pre;
}ST;
void end(ST **);
void print(ST *);
void swap(ST **);
main()
{
char ch;
ST *hptr=0;
do{
end(&hptr);
printf("Do you want to continue?\n");
scanf(" %c",&ch);
}while((ch=='y')||(ch=='Y'));
print(hptr);
printf("-------\n");
swap(&hptr);
print(hptr);
}
void swap(ST **ptr)
{
ST *first=*ptr,*second=(*ptr)->next;
first->next=second->next;
second->pre=first->pre;
second->next=first;
first->pre=second;
*ptr=second;
while(1)
{
second=first->next;

if((second==0)||(second->next==0))
return;

first->next=second->next;
first=second;
second=second->next;


first->next=second->next;
second->next=first;
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
